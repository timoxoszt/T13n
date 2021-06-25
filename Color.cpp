#include<iostream>
#include<string>
using namespace std;

class Color 
{
protected:
	string TenMau, MaMau;
public:
	Color() {
		TenMau = MaMau = "";
	}
	Color(string TenMau, string MaMau) {
		this->TenMau = TenMau;
		this->MaMau = MaMau;
	}
	~Color() {
		TenMau = MaMau = "";
	}
	friend istream& operator>>(istream& is, Color& obj) {
		cout << "Ten mau:";
		fflush(stdin);
		getline(cin, obj.TenMau);
		cout << "Ma mau:";
		fflush(stdin);
		getline(cin, obj.MaMau);
		return is;
	}
	friend ostream& operator<<(ostream& os, Color obj) {
		os << "Ten mau:" << obj.TenMau << endl;
		os << "Ma mau:" << obj.MaMau << endl;
		return os;
	}
	string getTenMau() {
		return this->TenMau;
	}
};

class Point {
protected:
	int x, y;
public:
	Point() {
		x = y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~Point() {
		x = y = 0;
	}
	friend istream& operator>>(istream& is, Point& obj) {
		cout << "Nhap x, y:";
		is >> obj.x >> obj.y;
		return is;
	}
	friend ostream& operator << (ostream & os, Point obj) {
		os << "x = " << obj.x << endl;
		os << "y = " << obj.y << endl;
		return os;
	}

	bool CheoChinh() {
		if (x == y)
			return true;
		else
			return false;
	}
};

class Pixel :public Color, public Point {
public:
	Pixel() {
		x = y = 0;
		TenMau = MaMau = "";
	}
	Pixel(int x, int y, string TenMau, string MaMau) {
		this->x = x;
		this->y = y;
		this->TenMau = TenMau;
		this->MaMau = MaMau;
	}
	~Pixel() {
		TenMau = MaMau = "";
		x = y = 0;
	}
	friend istream& operator>>(istream& is, Pixel& obj) {
		cout << "Nhap x:";
		is >> obj.x;
		cout << "Nhap y:";
		is >> obj.y;
		cout << "Nhap ten mau:";
		is >> obj.TenMau;
		cout << "Nhap ma mau:";
		is >> obj.MaMau;
		return is;
	}

	friend ostream& operator<<(ostream& os, Pixel obj) {
		os << "x = " << obj.x << endl;
		os << "y = " << obj.y << endl;
		os << "Ten mau = " << obj.TenMau << endl;
		os << "Ma mau = " << obj.MaMau << endl;
		return os;
	}

	bool Check() {
		if (x == y && MaMau == "#0000F")
			return true;
		else
			return false;
	}
};

int main() {
	
	cout << "Nhap so luong:";
	int n;
	cin >> n;
	Pixel* arr = new Pixel[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Output" << endl;
	for (int i = 0; i < n; i++)
		if (arr[i].Check() == true)
			cout << arr[i];
	return 0;
}

