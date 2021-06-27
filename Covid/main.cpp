#include <iostream>
#include <string>
#include "Nguoi.h"
#include "NuocNgoai.h"
#include "VietNam.h"
#include "KhuCL.h"
#include "Taptrung.h"
#include "Tunguyen.h"

using namespace std;

int main() {
	int sokhu, loaicl, loain, songuoi;
	
		cout << "=====NHAP THONG TIN=====" << endl;
			
		
			cout << "---Nhap thong tin khu cach li---" << endl;
			cout << endl;
			cout << "So luong khu cach li: ";
			cin >> sokhu;		
			for (int i = 0; i < sokhu; i++) {
				KhuCl** a = new KhuCl * [sokhu];
				cout << "1. Khu cach li tap trung." << endl;
				cout << "2. Khu cach li tu nguyen." << endl;
				cout << endl << "=> Chon: ";
				cin >> loaicl;
				if (loaicl == 1) {
					a[i] = new Taptrung;
				}
				if (loaicl == 2) {
					a[i] = new Tunguyen;
				}

				a[i]->Nhap();
				cout << "-----------------" << endl;
			}

			cout << "---Nhap thong tin nguoi nhap canh---" << endl;
			cout << endl;
			cout << "So nguoi nhap canh:";
			cin >> songuoi;
			for (int i = 0; i < songuoi; i++) {
			Nguoi** b = new Nguoi * [songuoi];
			cout << "1. Nguoi Viet Nam." << endl;
			cout << "2. Nguoi nuoc ngoai." << endl;
			cout << endl;
			cout << "=> Chon: ";
			cin >> loain;
			if (loain == 1) {
				b[i] = new VietNam;
			}
			if (loain == 2) {
				b[i] = new NuocNgoai;
			}
			b[i]->Nhap();
			}
										
			system("pause");
}