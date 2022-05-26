#include "MyMatrix.h"

MyMatrix::MyMatrix()
{
	num_rows = 0;
	num_cols = 0;
	matrix = NULL;
}

MyMatrix::MyMatrix(int nRows, int nCols)
{
	num_cols = nCols;
	num_rows = nRows;

	matrix = new float* [nCols];
	for (int i = 0; i < nCols; i++)
	{
		matrix[i] = new float[nRows];
	}
}

MyMatrix::~MyMatrix()
{
	/*for (int i = 0; i < num_cols; i++)
	{
		delete matrix[i];
	}
	delete matrix;*/
}

void MyMatrix::readFromFile(string path)
{
	ifstream myfile;
	myfile.open(path);
	
	myfile >> this->num_rows >> this->num_cols;

	matrix = new float* [num_cols];
	for (int i = 0; i < num_cols; i++)
	{
		matrix[i] = new float[num_rows];
	}

	for(int i = 0; i < num_cols;i++)
		for (int j = 0; j < num_rows; j++)
		{
			float temp;
			myfile >> temp;
			this->setValue(i, j, temp);
		}
			


	myfile.close();
}

void MyMatrix::writeToFile(string path)
{
	ofstream myfile;
	myfile.open(path);

	myfile << this->num_rows << " " << this->num_cols << endl;

	for (int i = 0; i < this->num_cols; i++)
	{
		for (int j = 0; j < this->num_rows; j++)
		{
			myfile<< this->getValue(i, j) << " ";

		}
		myfile << endl;
	}

	myfile.close();
}

MyMatrix* MyMatrix::operator-(MyMatrix other)
{
	return nullptr;
}

istream& operator>>(istream& is, MyMatrix& a)
{
	// TODO: insert return statement here
	for (int i = 0; i < a.num_cols; i++)
	{
		for (int j = 0; j < a.num_rows; j++)
		{
			float temp;
			is >> temp;
			a.setValue(i, j, temp);
			
		}
	}
	return is;
}

ostream& operator<<(ostream& os, MyMatrix a)
{
	// TODO: insert return statement here
	// TODO: insert return statement here
	for (int i = 0; i < a.num_cols; i++)
	{
		for (int j = 0; j < a.num_rows; j++)
		{
			os << a.getValue(i, j) << " ";

		}
		os << endl;
	}
	return os;
}
