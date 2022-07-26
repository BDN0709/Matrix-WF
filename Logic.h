#pragma once

#include "Matrix.h"

using namespace System;
using namespace System::Windows::Forms;

inline void CreateMatrix(Matrix& matrix, const int Rows, const int Columns)
{
	if (Rows <= 0 || Columns <= 0)
		throw gcnew Exception("Некоректні вхідні дані при створенні матриці!");


	matrix.Rows = Rows;
	matrix.Columns = Columns;

	matrix.Data = new int* [matrix.Rows];
	for (int i = 0; i < matrix.Rows; i++)
		matrix.Data[i] = new int[matrix.Columns];

	for (int i = 0; i < matrix.Rows; i++)
		for (int j = 0; j < matrix.Columns; j++)
			matrix.Data[i][j] = 0;

	return;
}

inline void DeleteMatrix(Matrix& matrix)
{
	if (matrix.Data == nullptr)
		throw gcnew Exception("Повторне видалення матриці!");

	for (int i = 0; i < matrix.Rows; i++)
		delete[] matrix.Data[i];
	delete[] matrix.Data;

	return;
}

inline void RandomFilling(Matrix& matrix)
{
	Random^ rand = gcnew Random();

	for (int i = 0; i < matrix.Rows; i++)
		for (int j = 0; j < matrix.Columns; j++)
			matrix.Data[i][j] = rand->Next(-420, 421);

	return;
}

inline unsigned int FindColumnWithMaxCharacteristic(Matrix& matrix)
{
	unsigned int ColumnWithMaxCharacteristic = -1;

	int MaxCharacteristic = 0;

	for (int j = 0; j < matrix.Columns; j++)
	{
		int CurrentCharacteristic = 0;

		for (int i = 0; i < matrix.Rows; i++)
			if (matrix.Data[i][j] < 0 && matrix.Data[i][j] % 2 != 0)
				CurrentCharacteristic += Math::Abs(matrix.Data[i][j]);

		if (CurrentCharacteristic > MaxCharacteristic)
		{
			MaxCharacteristic = CurrentCharacteristic;

			ColumnWithMaxCharacteristic = j;
		}

	}

	return ColumnWithMaxCharacteristic;
}