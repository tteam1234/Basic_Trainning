// tinh tong tu 1 den n
// thu vien
#include<iostream>
#include<math.h>
using namespace std;
// ham main
int main(){
	// khai bao bien
	int n;
	float s = 0;
	// xu li
	cin>>n; // nhap
	// tinh tong
	for(int i = 1; i<=n; i++){
		s+=pow(i,2);
	}
	cout<<s;// in tong
	return 0;
}
