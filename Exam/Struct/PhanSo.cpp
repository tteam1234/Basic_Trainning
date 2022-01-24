#include<iostream>
using namespace std;
typedef struct PhanSo{
    int tusonguyen;
    int mausonguyen;
};
void nhap(PhanSo &phanso);
void xuat(PhanSo phanso);
int main(){
    PhanSo phanso;
    nhap(phanso);
    xuat(phanso);
    return 0;
}
void nhap(PhanSo &phanso){
    cout<<"Nhap phan tusonguyen: ";
    cin>>phanso.tusonguyen;
    cout<<"Nhap phan mausonguyen: ";
    cin>>phanso.mausonguyen;
}
void xuat(PhanSo phanso){
    cout<<phanso.tusonguyen<<"/"<<phanso.mausonguyen;
}