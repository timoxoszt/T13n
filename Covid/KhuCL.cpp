#include "KhuCL.h"


void KhuCl::Nhap() {
	cout << "Ten khu cach li: ";
	cin.ignore();
	getline(cin, this->Tenkhu);
	cout << "Dia chi khu cach li: ";
	cin.ignore();
	getline(cin, this->DiachiKhu);
	cout << "Khoang cach den cua khau hien tai: ";
	cin >> this->Khoangcach;
	cout << "Suc chua: ";
	cin >> this->Succhua;
	cout << "Chi phi: ";
	cin >> this->Chiphi;
}

void KhuCl::Xuat() {
	cout << "Ten khu cach li:" << this->Tenkhu << endl;
	cout << "Dia chi: " << this->DiachiKhu << endl;
	cout << "Khoang cach: " << this->Khoangcach << endl;
	cout << "Suc chua: " << this->Succhua << endl;
	cout << "Chi phi: " << this->Chiphi << endl;
}

