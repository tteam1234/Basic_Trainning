#include<iostream>
#define MAX 100
using namespace std;
enum LuaChon{NHAPLAI = 1, XUAT = 2, LIETKECHAN = 3, LIETKELE = 4, DEMCHAN = 5, DEMLE = 6, TONTAICHAN = 7, TONTAILE = 8};
void nhap(int a[], int &n);
void xuat(int a[], int n);// dinh nghia
void lietKeChan(int a[], int n);
void lietKeLe(int a[], int n);
int demChan(int a[],int n);
int demLe(int a[],int n);
bool tonTaiChan(int a[],int n);
bool tonTaiLe(int a[],int n);
void menu(int a[], int &n);
int main(){
    // khai bao
    int a[MAX];
    int n;
    nhap(a,n);
    menu(a,n);
    return 0;
}
void nhap(int a[], int &n){
    cout<<"n:";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
}
void xuat(int a[], int n){// xay dung
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void lietKeChan(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
void lietKeLe(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
int demChan(int a[],int n){
    int dem = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            dem++;
        }
    }
    return dem;
}
int demLe(int a[],int n){
    int dem = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            dem++;
        }
    }
    return dem;
}
bool tonTaiChan(int a[],int n){
    bool tontai = false;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            tontai = true;
            break;
        }
    }
    return tontai;
}
bool tonTaiLe(int a[], int n){
    bool tontai = false;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            tontai = true;
            break;
        }
    }
    return tontai;
}
void menu(int a[], int &n){
    int luachon;
    do{
        cout<<"-------------------Menu---------------------"<<endl;
        cout<<"-------------------1. Nhap lai--------------"<<endl;
        cout<<"-------------------2. Xuat------------------"<<endl;
        cout<<"-------------------3. Liet Ke chan ---------"<<endl;
        cout<<"-------------------4. Liet ke le -----------"<<endl;
        cout<<"-------------------5. Dem chan -------------"<<endl;
        cout<<"-------------------6. Dem Le ---------------"<<endl;
        cout<<"-------------------7. Ton tai chan ---------"<<endl;
        cout<<"-------------------8. Ton tai le -----------"<<endl;
    cout<<"Nhap lua chon tuong ung:";
    cin>>luachon;   
    switch(luachon){
        case NHAPLAI:
            nhap(a,n);
            break;
        case XUAT:
            xuat(a,n);
            break;
        case LIETKECHAN:
            lietKeChan(a,n);
            break;
        case LIETKELE:
            lietKeLe(a,n);
            break;
        case DEMCHAN:
            cout<<"co "<<demChan(a,n)<<" so chan!"<<endl;
            break;
        case DEMLE:
            cout<<"dem "<<demLe(a,n)<<" so le!"<<endl;
            break;
        case TONTAICHAN:
            if(tonTaiChan(a,n)){
                cout<<"Ton tai so chan!"<<endl;
            }
            else{
                cout<<"Khong ton tai so chan!"<<endl;
            }
            break;
        case TONTAILE:
            if(tonTaiLe(a,n)){
                cout<<"Ton tai so le!"<<endl;
            }
            else{
                cout<<"Khong ton tai so le!"<<endl;
            }
            break;
        default:
            cout<<"lua chon khong hop le!"<<endl;
            break;
    }
    cout<<"Nhan phim 0 de ket thuc:";
    cin>>luachon;
    } while(luachon!=0);
}