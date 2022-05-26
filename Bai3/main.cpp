#include<iostream>
#include"ThietBIGD.h"
#include"ThietBiGDDT.h"
using namespace std;

int main()
{
	ThietBIGD* a;
	a = new ThietBiGDDT();
	a->Nhap();
	a->Xuat();
	return 0;
}