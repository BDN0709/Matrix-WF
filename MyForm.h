#pragma once

namespace MatrixWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ëı≥‰ToolStripMenuItem;
	private: System::Windows::Forms::Label^ labelMatrix;

	private: System::Windows::Forms::DataGridView^ MatrixGridView;
	private: System::Windows::Forms::NumericUpDown^ numericRows;
	private: System::Windows::Forms::NumericUpDown^ numericColumns;
	private: System::Windows::Forms::Button^ buttonCreate;
	private: System::Windows::Forms::Button^ buttonGenerate;
	private: System::Windows::Forms::Label^ labelTextOfAnswer;
	private: System::Windows::Forms::Label^ labelAnswer;
	private: System::Windows::Forms::GroupBox^ groupBoxAnswer;
	private: System::Windows::Forms::GroupBox^ groupBoxMatrix;
	private: System::Windows::Forms::Button^ buttonFindAnswer;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->‚Ëı≥‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labelMatrix = (gcnew System::Windows::Forms::Label());
			this->MatrixGridView = (gcnew System::Windows::Forms::DataGridView());
			this->numericRows = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericColumns = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->labelTextOfAnswer = (gcnew System::Windows::Forms::Label());
			this->labelAnswer = (gcnew System::Windows::Forms::Label());
			this->groupBoxAnswer = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->buttonFindAnswer = (gcnew System::Windows::Forms::Button());
			this->menuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRows))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericColumns))->BeginInit();
			this->groupBoxAnswer->SuspendLayout();
			this->groupBoxMatrix->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->‚Ëı≥‰ToolStripMenuItem });
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Padding = System::Windows::Forms::Padding(7, 3, 0, 3);
			this->menuStrip->Size = System::Drawing::Size(1059, 31);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// ‚Ëı≥‰ToolStripMenuItem
			// 
			this->‚Ëı≥‰ToolStripMenuItem->AutoSize = false;
			this->‚Ëı≥‰ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->‚Ëı≥‰ToolStripMenuItem->Name = L"‚Ëı≥‰ToolStripMenuItem";
			this->‚Ëı≥‰ToolStripMenuItem->Size = System::Drawing::Size(55, 25);
			this->‚Ëı≥‰ToolStripMenuItem->Text = L"¬Ëı≥‰";
			this->‚Ëı≥‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::‚Ëı≥‰ToolStripMenuItem_Click);
			// 
			// labelMatrix
			// 
			this->labelMatrix->AutoSize = true;
			this->labelMatrix->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMatrix->Location = System::Drawing::Point(165, 17);
			this->labelMatrix->Name = L"labelMatrix";
			this->labelMatrix->Size = System::Drawing::Size(96, 25);
			this->labelMatrix->TabIndex = 1;
			this->labelMatrix->Text = L"Ã‡ÚËˆˇ:\r\n";
			// 
			// MatrixGridView
			// 
			this->MatrixGridView->AllowUserToAddRows = false;
			this->MatrixGridView->AllowUserToDeleteRows = false;
			this->MatrixGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MatrixGridView->Location = System::Drawing::Point(6, 51);
			this->MatrixGridView->Name = L"MatrixGridView";
			this->MatrixGridView->Size = System::Drawing::Size(444, 444);
			this->MatrixGridView->TabIndex = 2;
			// 
			// numericRows
			// 
			this->numericRows->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericRows->Location = System::Drawing::Point(153, 510);
			this->numericRows->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericRows->Name = L"numericRows";
			this->numericRows->Size = System::Drawing::Size(58, 25);
			this->numericRows->TabIndex = 3;
			this->numericRows->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericRows->ThousandsSeparator = true;
			this->numericRows->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericColumns
			// 
			this->numericColumns->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericColumns->Location = System::Drawing::Point(217, 510);
			this->numericColumns->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericColumns->Name = L"numericColumns";
			this->numericColumns->Size = System::Drawing::Size(58, 25);
			this->numericColumns->TabIndex = 4;
			this->numericColumns->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericColumns->ThousandsSeparator = true;
			this->numericColumns->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonCreate
			// 
			this->buttonCreate->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonCreate->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCreate->Location = System::Drawing::Point(94, 541);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(117, 32);
			this->buttonCreate->TabIndex = 5;
			this->buttonCreate->Text = L"—Ú‚ÓËÚË!";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &MyForm::buttonCreate_Click);
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->AutoSize = true;
			this->buttonGenerate->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonGenerate->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGenerate->Location = System::Drawing::Point(217, 541);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(117, 32);
			this->buttonGenerate->TabIndex = 6;
			this->buttonGenerate->Text = L"«„ÂÌÂÛ‚‡ÚË!";
			this->buttonGenerate->UseVisualStyleBackColor = true;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerate_Click);
			// 
			// labelTextOfAnswer
			// 
			this->labelTextOfAnswer->AutoSize = true;
			this->labelTextOfAnswer->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelTextOfAnswer->Location = System::Drawing::Point(19, 43);
			this->labelTextOfAnswer->Name = L"labelTextOfAnswer";
			this->labelTextOfAnswer->Size = System::Drawing::Size(469, 25);
			this->labelTextOfAnswer->TabIndex = 7;
			this->labelTextOfAnswer->Text = L"π Á/Ô ÒÚÓ‚Ôˆˇ Á Ï‡ÍÒËÏ‡Î¸ÌÓ˛ ı‡‡ÍÚÂËÒÚËÍÓ˛:";
			// 
			// labelAnswer
			// 
			this->labelAnswer->AutoSize = true;
			this->labelAnswer->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAnswer->Location = System::Drawing::Point(494, 43);
			this->labelAnswer->Name = L"labelAnswer";
			this->labelAnswer->Size = System::Drawing::Size(51, 25);
			this->labelAnswer->TabIndex = 8;
			this->labelAnswer->Text = L"Õ/ƒ";
			// 
			// groupBoxAnswer
			// 
			this->groupBoxAnswer->Controls->Add(this->labelTextOfAnswer);
			this->groupBoxAnswer->Controls->Add(this->labelAnswer);
			this->groupBoxAnswer->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxAnswer->Location = System::Drawing::Point(478, 284);
			this->groupBoxAnswer->Name = L"groupBoxAnswer";
			this->groupBoxAnswer->Size = System::Drawing::Size(567, 96);
			this->groupBoxAnswer->TabIndex = 9;
			this->groupBoxAnswer->TabStop = false;
			this->groupBoxAnswer->Text = L"¬≥‰ÔÓ‚≥‰¸";
			// 
			// groupBoxMatrix
			// 
			this->groupBoxMatrix->Controls->Add(this->MatrixGridView);
			this->groupBoxMatrix->Controls->Add(this->labelMatrix);
			this->groupBoxMatrix->Controls->Add(this->buttonGenerate);
			this->groupBoxMatrix->Controls->Add(this->numericRows);
			this->groupBoxMatrix->Controls->Add(this->buttonCreate);
			this->groupBoxMatrix->Controls->Add(this->numericColumns);
			this->groupBoxMatrix->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxMatrix->Location = System::Drawing::Point(16, 49);
			this->groupBoxMatrix->Name = L"groupBoxMatrix";
			this->groupBoxMatrix->Size = System::Drawing::Size(456, 585);
			this->groupBoxMatrix->TabIndex = 10;
			this->groupBoxMatrix->TabStop = false;
			this->groupBoxMatrix->Text = L" ÂÛ‚‡ÌÌˇ Ï‡ÚËˆÂ˛";
			// 
			// buttonFindAnswer
			// 
			this->buttonFindAnswer->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonFindAnswer->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonFindAnswer->Location = System::Drawing::Point(110, 640);
			this->buttonFindAnswer->Name = L"buttonFindAnswer";
			this->buttonFindAnswer->Size = System::Drawing::Size(240, 40);
			this->buttonFindAnswer->TabIndex = 7;
			this->buttonFindAnswer->Text = L"«Ì‡ÈÚË ‚≥‰ÔÓ‚≥‰¸!";
			this->buttonFindAnswer->UseVisualStyleBackColor = true;
			this->buttonFindAnswer->Click += gcnew System::EventHandler(this, &MyForm::buttonFindAnswer_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 715);
			this->Controls->Add(this->buttonFindAnswer);
			this->Controls->Add(this->groupBoxMatrix);
			this->Controls->Add(this->groupBoxAnswer);
			this->Controls->Add(this->menuStrip);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Matrix";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRows))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericColumns))->EndInit();
			this->groupBoxAnswer->ResumeLayout(false);
			this->groupBoxAnswer->PerformLayout();
			this->groupBoxMatrix->ResumeLayout(false);
			this->groupBoxMatrix->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ‚Ëı≥‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonFindAnswer_Click(System::Object^ sender, System::EventArgs^ e);
	private: void ShowMatrix(Matrix& matrix);
	private: bool OkMatrixValues();

};
}