// tinh tong tu 1 den n
// thu vien
#include<iostream>
using namespace std;
// ham main
int main(){
	// khai bao bien
	int n;
	float s = 0;
	// xu li
	cin>>n; // nhap
	// tinh tong
	for(int i = 0; i<n; i++){
		s+=(float)(2*i+1)/(2*i+2);// ép kiểu
	}
	cout<<s;// in tong
	return 0;
}
