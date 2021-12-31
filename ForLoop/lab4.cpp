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
	for(int i = 1; i<=n; i++){
		s+=(float)1/(2*i);// ép kiểu
	}
	cout<<s;// in tong
	return 0;
}
