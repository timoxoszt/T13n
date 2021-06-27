#pragma once
#include "Nguoi.h"

class NuocNgoai :public Nguoi
{
private:
	string TenNT, DiachiNT;
public:
	virtual void Nhap();
	virtual void Xuat();
};