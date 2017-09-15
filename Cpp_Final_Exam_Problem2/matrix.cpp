#include "matrix.h"
#include<iostream>
using namespace std;




matrix::matrix(int r, int c):row(r),col(c)
{
	*mat = new int[row];
	for (int i = 0; i < row; i++)
		mat[i] = new int[col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			mat[i][j] = 0;
}

matrix::~matrix()
{
	for (int i = 0; i < row; i++)
		delete[] mat[i];
	delete[] mat;
}

void matrix::inputValue()
{
	cout << "Enter elements of the matrix:" << endl;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			cout << "Enter element M[" << i << "][" << j << "]:" << endl;
			cin >> mat[i][j];
		}
}

int matrix::oval(int i, int j)
{
	return mat[i][j];
}

void matrix::displayMat()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << mat[i][j] << ' ';
		cout << '\n';
	}
}
