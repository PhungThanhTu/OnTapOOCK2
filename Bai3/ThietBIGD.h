#pragma once
#include <string>
#include<iostream>
using namespace std;
class ThietBIGD
{
private:
	float cong_suat;
	string hang_san_xuat;
public:
	ThietBIGD();
	ThietBIGD(float CongSuat, string HangSanXuat);

	virtual void Nhap();
	virtual void Xuat();
};

