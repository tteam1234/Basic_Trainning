#include<iostream>
#define MAX 100
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);// dinh nghia
void lietKeChan(int a[], int n);
void lietKeLe(int a[], int n);
int demChan(int a[],int n);
int demLe(int a[],int n);
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