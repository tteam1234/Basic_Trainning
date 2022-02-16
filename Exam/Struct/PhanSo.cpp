#include<iostream>
using namespace std;
typedef struct PhanSo{
    int tusonguyen;
    int mausonguyen;
};
void nhap(PhanSo &phanso);
void xuat(PhanSo phanso);
void menu(PhanSo phanso);// dinh nghia ham menu
int main(){e
    PhanSo phanso;
    nhap(phanso);
    menu(phanso);
    return 0;
}
void nhap(PhanSo &phanso){
    cout<<"Nhap tu so: ";
    cin>>phanso.tusonguyen;
    cout<<"Nhap mau so: ";
    cin>>phanso.mausonguyen;
}
void xuat(PhanSo phanso){
    cout<<phanso.tusonguyen<<"/"<<phanso.mausonguyen;
}
void menu(PhanSo phanso){
    int luachon;
    do{
     cout<<"------------Menu------------"<<endl;
    cout<<"1. nhap lai"<<endl;
    cout<<"2. xuat ra phan so"<<endl;
    cout<<"3. rut gon phan so"<<endl;
    cout<<"nhap lua chon:";
    cin>>luachon;
    switch(luachon){
        case 1: {
            nhap(phanso);
            break;
        }
        case 2: {
            xuat(phanso);
            break;
        }
        case 3: {
            cout<<"rut gon phan so";
            break;
        }
        default:{
            cout<<"lua chon khong hop le";
            break;
        }

    }
        cout<<"Nhap phim 1 de thoat";
        cin>>luachon;
    }while(luachon!=1);       
}