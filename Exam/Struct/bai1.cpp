#include<iostream>
#include<math.h>
using namespace std;
#define MAX 100
 
void nhap (int a[], int &n)
{
    do
    {
        cout<<"\nNhập số phần tử: ";
        cin>>n;
        if(n <= 0 || n > MAX)
        {
            cout<<"\nSố phần tử không hợp lệ";
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        cout<<"\nNhập a["<<i<<"]: ";
        cin>>a[i];
    }
}