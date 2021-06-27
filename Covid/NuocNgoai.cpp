#include "NuocNgoai.h"

void NuocNgoai :: Nhap() {
	Nguoi::Nhap();
	cout << "Ho va ten nguoi than:";
	cin.ignore();
	getline(cin, this->TenNT);
	cout << "Dia chi lien lac nguoi than: ";
	cin.ignore();
	getline(cin, this->DiachiNT);
}

void NuocNgoai::Xuat() {
	Nguoi::Xuat();
	cout << "Ho va ten nguoi than: " << this->TenNT << endl;
	cout << "Dia chi nguoi than: " << this->DiachiNT << endl;
}