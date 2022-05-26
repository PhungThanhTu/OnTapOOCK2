#pragma once
#include"ThietBIGD.h"
class ThietBiGDDT :public  ThietBIGD
{
private:
	float kich_thuoc;
public:
	ThietBiGDDT() :ThietBIGD() {
		kich_thuoc = 0;
	}
	ThietBiGDDT(float CongSuat, string HangSanXuat, float KichThuoc) :ThietBIGD(CongSuat, HangSanXuat) {
		this->kich_thuoc = KichThuoc;
	}

	void Nhap();
	void Xuat();
};

