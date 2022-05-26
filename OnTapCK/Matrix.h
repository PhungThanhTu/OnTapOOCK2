#pragma once
#include <iostream>

using namespace std;
class Matrix
{
private:
	int num_rows;
	int num_columns;
	float** matrix;
public:
	Matrix(int nCols, int nRows);
	int getNumRows() { return num_rows; }
	int getNumCols() { return num_columns; }
	void setValue(int i, int j, float value);
	void readFromFile(string path);
	void writeToFile(string path);
	Matrix* operator+(Matrix other);
	Matrix* operator-(Matrix other);
	Matrix* operator*(Matrix other);
	float operator()(int, int);

	friend istream& operator>>(istream& is, Matrix& a);
	friend ostream& operator<<(ostream& os, Matrix a);


};

