#include<iostream>
#define MAX 100
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);// dinh nghia
void lietKeChan(int a[], int n);
void lietKeLe(int a[], int n);
int demChan(int a[],int n);
int demLe(int a[],int n);
bool tonTaiChan(int a[],int n);
bool tonTaiLe(int a[],int n);
int main(){
    // khai bao
    int a[MAX];
    int n;
    // nhap mang
    nhap(a,n);
    xuat(a,n);// goi ham
    lietKeChan(a,n);
    lietKeLe(a,n);
    cout<<"Co "<<demChan(a,n)<<" so chan"<<endl;
    cout<<"Co "<<demLe(a,n)<<" so le"<<endl;
    //kiem tra ton tai so chan
    if(tonTaiChan(a,n)){
        cout<<"Ton tai so chan!"<<endl;
    } else {
        cout<<"Khong ton tai so chan!"<<endl;
    }
    // kiem tra ton tai so le
     if(tonTaiLe(a,n)){
        cout<<"Ton tai so le!"<<endl;
    } else {
        cout<<"Khong ton tai so le!"<<endl;
    }
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