#pragma once
#include <iostream>
#include <string>
using namespace std;
class KhuCl {
protected:
	string Tenkhu, DiachiKhu;
	float Khoangcach, Succhua, Chiphi;
public:
	virtual void Nhap();
	virtual void Xuat();
};