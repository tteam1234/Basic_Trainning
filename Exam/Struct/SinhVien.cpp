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
void menu(SinhVien sinhvien);
int main(){
    SinhVien sinhvien;
    nhap(sinhvien);
    menu(sinhvien);
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
void menu(SinhVien sinhvien){
    int luachon;
    do{ 
        // in man hinh
        cout<<"----------Menu----------"<<endl;
        cout<<"1. Nhap lai"<<endl;
        cout<<"2. xuat thong tin sinh vien"<<endl;
        cout<<"nhap lua chon";
        cin>>luachon;
        switch(luachon){
            case 1:{
                nhap(sinhvien);
                break;
            }
            case 2:{
                xuat(sinhvien);
                break;
            }
            default:{
                cout<<"lua chon khong hop le";
                break;
            }
        }
        cout<<"Nhan phim 1 de thoat";
        cin>>luachon;
    } while(luachon!=1);
}