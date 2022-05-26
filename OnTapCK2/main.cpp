#include<iostream>
#include "MyMatrix.h"
using namespace std;

int main() {

	MyMatrix a = MyMatrix(3,2);
	cin >> a;
	cout << "Result : \n";
	cout << a;
	a.writeToFile("E.txt");

}