#include <iostream>
using namespace std;// cho 1 mảng a gồm n phần tử. Tìm kiếm phần tử có giá trị n bằng các thuật toán tìm kiếm
bool binarySearch(int a[], int n, int x);
int main(){
    int a[] = {1,2,3,3,5,6,7,8,9,10,11,12};
    int x = 5;
    int n = (sizeof a) / (sizeof a[0]);
    cout<<(binarySearch(a,n,x)?"Tồn tại":"không tồn tài");
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