// gai thua;
//0! = 1
//1! = 1
//2! = 1! * 2 
// n! =(n-1) * n
#include<iostream>
using namespace std;
double tinhGiaiThua(int n);
int main(){
    int n=5;
    cout<<n<<"! = "<<tinhGiaiThua(n);
    return 0;    
}
double tinhGiaiThua(int n){
    // TH Co so
    if(n==0 || n==1){
        return 1;
    }
    // TH binh thuong
    return tinhGiaiThua(n-1) *n;
}