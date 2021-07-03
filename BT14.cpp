#include <iostream>
#include <conio.h>
#include <math.h>
#include <vector>
using namespace std;

class Matrix
{
    int** data;
    int nRows, nCols;
public:
    // Hàm khởi tạo ma trận mặc định.
    Matrix();
    // Hàm khởi tạo kích thước ma trận (bao gồm cấp phát động) với số //hàng bằng r và số cột bằng c.
    Matrix(int r, int c);
    // Hàm hủy (bao gồm giải phóng bộ nhớ)
    Matrix(Matrix& m1);
    ~Matrix();
    void setAt(int i, int j, int x); // Đặt giá trị phần tử (i,j) bằng x.
    int getAt(int i, int j); //Lấy giá trị phần tử (i,j) của ma trận
    void display(); //Hiển thị ma trận ra màn hình.
    void resize(int r, int c); //Đặt lại kích thước ma trận
    // Cộng hai ma trận
    friend Matrix operator+(const Matrix& m1, const Matrix& m2);
    // Nhân hai ma trận
    friend Matrix operator*(const Matrix& m1, const Matrix& m2);
};


Matrix::Matrix() {
    int i, j;
    cout << "So hang: ";
    cin >> nRows;
    cout << "So cot: ";
    cin >> nCols;
    
    data = new int *[nRows];

    for (i = 0; i < nRows; i++) 
        data[i] = new int [nCols];
        
    for (i = 0; i < nRows; i++)            
        for (j = 0; j < nCols; i++) {
                cout << "data[" << i << "," << j << "]: ";
                cin >> data[i][j];
            }
    
}

Matrix::Matrix(int r, int c) {
    int i, j;
    nRows = r; nCols = c;
    data = new int* [nRows];
    for (i = 0; i < nRows; i++)
        data[i] = new int [nCols];
    for(i=0;i<nRows;i++)
    for (j = 0; j < nCols; j++) {
            cout << "data[" << i << "," << j << "]: ";
            cin >> data[i][j];
    }
}

Matrix::Matrix(Matrix& m1) {
    int i, j;
    nRows = m1.nRows; nCols = m1.nCols;
    data = new int* [nRows];
    for (i = 0; i < nRows; i++)
        data[i] = new int[nCols];
    for (i = 0; i < nRows; i++)
        for (j = 0; j < nCols; j++)
            data[i][j] = m1.data[i][j];
}

Matrix::~Matrix() {
    int i;
    for (i = 0; i < nRows; i++)
        delete data[i];
    delete data;
}

void Matrix::display() {
    int i, j;
    for (i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++)
            cout << data[i][j] << "        ";
        cout << "\n";
    }
}

Matrix operator+(const Matrix& m1, const Matrix& m2) {
    int i, j;
    static Matrix c(m1.nRows, m2.nCols);

  //  Matrix c = m1;
  //  c.data = new int* [m1.nRows];
    for (i = 0; i < m1.nRows; i++)
        for (j = 0; j < m1.nCols; j++)
            c.data[i][j] = m1.data[i][j] + m2.data[i][j];
    return c;
}



int main() {
    cout << "***Nhap ma tran m1***" << endl;
    Matrix m1;
    cout << "------------------" << endl;
    cout << "***Nhap ma tran m2***" << endl;
    Matrix m2;

    m1.display();
    cout << " + ";
    m2.display();
    cout << " = ";
    (m1 + m2).display();
    _getch();
}
