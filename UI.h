#pragma once

Matrix MATRIX;

inline System::Void MatrixWF::MyForm::вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Ви впевнені, що хочете вийти?", "Уточнення.", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
		Application::Exit();

	return System::Void();
}

inline System::Void MatrixWF::MyForm::buttonCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
	CreateMatrix(MATRIX, Convert::ToInt32(numericRows->Value), Convert::ToInt32(numericColumns->Value));
	ShowMatrix(MATRIX);

	return System::Void();
}

inline System::Void MatrixWF::MyForm::buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e)
{
	CreateMatrix(MATRIX, Convert::ToInt32(numericRows->Value), Convert::ToInt32(numericColumns->Value));
	RandomFilling(MATRIX);
	ShowMatrix(MATRIX);

	return System::Void();
}

inline System::Void MatrixWF::MyForm::buttonFindAnswer_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!OkMatrixValues())
		MessageBox::Show("У матриці присутні недопустимі дані!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else
	{
		for (int i = 0; i < MatrixGridView->RowCount; i++)
			for (int j = 0; j < MatrixGridView->ColumnCount; j++)
				MATRIX.Data[i][j] = Convert::ToInt32(MatrixGridView->Rows[i]->Cells[j]->Value);


		unsigned int ColumnWithMaxCharacteristic = FindColumnWithMaxCharacteristic(MATRIX);

		if (ColumnWithMaxCharacteristic == -1)
			labelAnswer->Text = "Н/Д";
		else
			labelAnswer->Text = Convert::ToString(ColumnWithMaxCharacteristic + 1);
	}

	return System::Void();
}

inline void MatrixWF::MyForm::ShowMatrix(Matrix& matrix)
{
	MatrixGridView->RowCount = matrix.Rows;
	MatrixGridView->ColumnCount = matrix.Columns;

	for (int i = 0; i < matrix.Rows; i++)
	{
		for (int j = 0; j < matrix.Columns; j++)
		{
			MatrixGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			MatrixGridView->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

			MatrixGridView->Rows[i]->Cells[j]->Value = matrix.Data[i][j];
		}
	}

	MatrixGridView->AutoResizeRows(DataGridViewAutoSizeRowsMode::AllCells);
	MatrixGridView->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);

	return;
}

inline bool MatrixWF::MyForm::OkMatrixValues()
{
	bool Ok = true;

	for (int i = 0; i < MatrixGridView->RowCount; i++)
	{
		for (int j = 0; j < MatrixGridView->ColumnCount; j++)
		{
			MatrixGridView->Rows[i]->Cells[j]->Style->BackColor = BackColor.White;

			String^ str = MatrixGridView->Rows[i]->Cells[j]->Value->ToString();

			for (int g = 0; g < str->Length; g++)
				if ((str[g] < 48 || str[g] > 57) && str[g] != 45)
				{
					Ok = false;
					MatrixGridView->Rows[i]->Cells[j]->Style->BackColor = BackColor.Red;
				}
		}
	}

	return Ok;
}