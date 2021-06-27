#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nguoi {
protected:
	string Hoten, Diachi, NgayNC, Khoihanh;
	float Hochieu, Xacsuat;
public:
	virtual void Nhap();
	virtual void Xuat();
};
