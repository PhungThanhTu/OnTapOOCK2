#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class MyMatrix
{
private:
	int num_rows;
	int num_cols;
	float** matrix;
public:
	MyMatrix();
	MyMatrix(int nRows, int nCols);
	~MyMatrix();
	int getNumRows() { return num_rows; }
	int getNumCols() { return num_cols; }
	float getValue(int i, int j) { return matrix[i][j]; }
	void setValue(int i, int j, float value) { matrix[i][j] = value; }

	void readFromFile(string path);
	void writeToFile(string path);

	
	MyMatrix* operator+(MyMatrix other);
	MyMatrix* operator-(MyMatrix other);
	MyMatrix* operator*(MyMatrix other);

	friend istream& operator>>(istream& is, MyMatrix& a);
	friend ostream& operator<<(ostream& os, MyMatrix a);


};

