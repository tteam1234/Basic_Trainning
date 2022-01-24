#include<iostream>
using namespace std;
typedef struct SinhVien{
    string hoten;
    int namsinh;
    string gioitinh;
    float gpa;
};
void nhap(SinhVien &sinhvien);
void xuat(SinhVien sinhvien);
int main(){
    SinhVien sinhvien;
    nhap(sinhvien);
    xuat(sinhvien);
    return 0;
}
void nhap(SinhVien &sinhvien){
    cout<<"Nhap ho ten: ";
    cin>>sinhvien.hoten;
    cout<<"Nhap nam sinh: ";
    cin>>sinhvien.namsinh;
    cout<<"Nhap gioi tinh: ";
    cin>>sinhvien.gioitinh;
    cout<<"Nhap gpa: ";
    cin>>sinhvien.gpa;
}
void xuat(SinhVien sinhvien){
    cout<<sinhvien.hoten<<"\n"<<sinhvien.namsinh;
}