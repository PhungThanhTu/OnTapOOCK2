#include "ThietBIGD.h"

ThietBIGD::ThietBIGD()
{
	cong_suat = 0;
	hang_san_xuat = "undefined";
}

ThietBIGD::ThietBIGD(float CongSuat, string HangSanXuat)
{
	this->cong_suat = CongSuat;
	this->hang_san_xuat = HangSanXuat;
}

void ThietBIGD::Nhap()
{
	cout << " Nhap hang san xuat : \n";
	getline(cin, hang_san_xuat);
	cout << " Nhap cong suat :\n";
	cin >> cong_suat;
}

void ThietBIGD::Xuat()
{
	cout << "\nHang san xuat : " << hang_san_xuat;
	cout << "\nCong suat : " << cong_suat << " W";
}
