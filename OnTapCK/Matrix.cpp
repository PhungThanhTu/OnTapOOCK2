#include "Matrix.h"
#include<fstream>

Matrix::Matrix(int nCols, int nRows)
{
	this->num_columns = nCols;
	this->num_rows = nRows;
	this->matrix = new float*[num_rows];
	for (int i = 0; i < num_columns; i++)
	{
		matrix[i] = new float[num_columns];
	}
}

void Matrix::setValue(int i, int j, float value)
{
	this->matrix[i][j] = value;
}

void Matrix::readFromFile(string path)
{
	ifstream is;
	is.open(path);
	int n_cols, n_rows;
	is >> n_cols >> n_rows;

	this->num_columns = n_cols;
	this->num_rows = n_rows;
	this->matrix = new float* [num_rows];
	for (int i = 0; i < num_columns; i++)
	{
		matrix[i] = new float[num_columns];
	}

	// TODO: insert return statement here
	for (int i = 0; i < this->getNumRows(); i++) {
		for (int j = 0; j < this->getNumCols(); j++) {
			float tempVal;
			is >> tempVal;
			this->setValue(i, j, tempVal);
		}
	}
	is.close();

}

void Matrix::writeToFile(string path)
{
	ofstream ofs;
	ofs.open(path);
	ofs << this->getNumCols() << " " << this->getNumRows() << "\n";
	for (int i = 0; i < this->getNumRows(); i++) {
		for (int j = 0; j < this->getNumCols(); j++) {
			ofs << (*this)(i, j) << " ";
		}
		ofs << endl;
	}
	ofs.close();


}

Matrix* Matrix::operator+(Matrix other)
{	
	int n_rows = this->getNumRows();
	int n_cols = this->getNumCols();
	if(this->getNumCols() != other.getNumCols() || this->getNumRows() != other.getNumRows())
		return NULL;
	Matrix result = Matrix(n_rows,n_cols);
	for (int i = 0; i < n_cols; i++)
	{
		for (int j = 0; j < n_cols; j++)
		{
			result.setValue(i, j, (*this)(i, j) + other(i, j));
		}
	}
	return &result;
}

Matrix* Matrix::operator-(Matrix other)
{
	int n_rows = this->getNumRows();
	int n_cols = this->getNumCols();
	if (this->getNumCols() != other.getNumCols() || this->getNumRows() != other.getNumRows())
		return NULL;
	Matrix result = Matrix(n_rows, n_cols);
	for (int i = 0; i < n_cols; i++)
	{
		for (int j = 0; j < n_cols; j++)
		{
			result.setValue(i, j, (*this)(i, j) - other(i, j));
		}
	}
	return &result;
}

Matrix* Matrix::operator*(Matrix other)
{
	if(this->getNumCols() != other.getNumRows())
		return NULL;
	int m = this->getNumRows();
	int k = other.getNumCols();
	Matrix result = Matrix(this->getNumRows(), other.getNumCols());


}

float Matrix::operator()(int i, int j)
{
	// TODO: insert return statement here
	return this->matrix[i][j];
}

istream& operator>>(istream& is, Matrix& a)
{

	for (int i = 0; i < a.getNumRows();i++) {
		for (int j = 0; j < a.getNumCols(); j++) {
			float tempVal;
			is >> tempVal;
			a.setValue(i, j, tempVal);
		}
	}
	return is;
}

ostream& operator<<(ostream& os, Matrix a)
{

	for (int i = 0; i < a.getNumRows(); i++) {
		for (int j = 0; j < a.getNumCols(); j++) {
			os << a(i, j) << " ";
		}
		os << endl;
	}
	return os;
}
