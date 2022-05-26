#include "ThietBiGDDT.h"

void ThietBiGDDT::Nhap()
{
	ThietBIGD::Nhap();
	cout << " Nhap kich thuoc : \n";
	cin >> kich_thuoc;
}

void ThietBiGDDT::Xuat()
{
	ThietBIGD::Xuat();
	cout << "\nKich thuoc : " << kich_thuoc << " inches";
}
