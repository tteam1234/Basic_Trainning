#include <iostream>
using namespace std;
bool binarySearch(int a[], int n, int x);// tim kiem nhi phan
bool linearSearch(int a[], int n, int x);// tim kiem tuyen tinh
int main(){
    int a[] = {1,2,3,3,5,6,7,8,9,10,11,12};
    int x = 5;
    int n = (sizeof a) / (sizeof a[0]);
    cout<<(binarySearch(a,n,x)?"Tồn tại":"không tồn tài");
    cout<<(linearSearch(a,n,x)?"Tồn tại":"không tồn tại");
    return 0;
}
bool binarySearch(int a[], int n, int x){
    bool exist = false;
    int left = 0;
    int right = n-1;
    int mid = 0;
    while(left<=right){
        mid = (left+right)/2;
        if(a[mid]>x){
            right = mid-1;
        }
        else if(a[mid]<x){
            left = mid+1;
        }
        else{
            exist = true;
            break;
        }
    }
    return exist;
}
bool linearSearch(int a[], int n, int x){
    bool exist = false;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            exist = true;
            break;
        }
    }
    return exist;
}