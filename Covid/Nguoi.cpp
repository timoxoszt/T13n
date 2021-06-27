#include "Nguoi.h"

void Nguoi::Nhap() {
	cout << "Ho va ten: ";
	cin.ignore();
	getline(cin, this->Hoten);
	cout << "Dia chi: ";
	cin.ignore();
	getline(cin, this->Diachi);
	cout << "Ngay nhap canh: ";
	cin.ignore();
	getline(cin, this->NgayNC);
	cout << "Ho chieu: ";	
	cin >> this->Hochieu;
	cout << "Dia diem khoi hanh: ";
	cin.ignore();
	getline(cin, this->Khoihanh);
	cout << "Xac xuat mam benh: ";
	cin >> this->Xacsuat;
}

void Nguoi::Xuat() {
	cout << "---------------------------------------" << endl;
	cout << "Ho va ten: " << this->Hoten << endl;
	cout << "Dia chi: " << this->Diachi << endl;
	cout << "Ngay nhap canh: " << this->NgayNC << endl;
	cout << "Ho chieu: " << this->Hochieu << endl;
	cout << "Dia diem khoi hanh: " << this->Khoihanh << endl;
	cout << "Xac suat mam benh: " << this->Xacsuat << endl;
}