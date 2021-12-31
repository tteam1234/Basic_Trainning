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
        int s1 = 1;
		for(int j = 1; j<=i;j++){
            s1*=j;
        }
        s+=s1;
	}
	cout<<s;// in tong
	return 0;
}
