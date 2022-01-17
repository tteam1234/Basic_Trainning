#include<iostream>
#define MAX 100
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);// dinh nghia
int main(){
    // khai bao
    int a[MAX];
    int n;
    // nhap mang
    nhap(a,n);
    xuat(a,n);// goi ham
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