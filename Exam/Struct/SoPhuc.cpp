#include<iostream>
using namespace std;
typedef struct SoPhuc{
  float phanthuc;
  float phanao;  
};
void nhap(SoPhuc &sophuc);
void xuat(SoPhuc sophuc);
int main(){
    SoPhuc sophuc;
    nhap(sophuc);
    xuat(sophuc);
    return 0;
}
void nhap(SoPhuc &sophuc){
    cout<<"Nhap phan thuc: ";
    cin>>sophuc.phanthuc;
    cout<<"Nhap phan ao :";
    cin>>sophuc.phanao;
}
void xuat(SoPhuc sophuc){
    cout<<sophuc.phanthuc<<"/"<<sophuc.phanao;
}