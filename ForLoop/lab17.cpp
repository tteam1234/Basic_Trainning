// tinh tong tu 1 den n
// thu vien
#include<iostream>
#include<cmath>
using namespace std;
// ham main
int main(){
	// khai bao bien
	int x,n;
	float s = 0;
	// xu li
    cin>>x;
	cin>>n; // nhap
	// tinh tong
	for(int i = 1; i<=n; i++){
        float s1 = 1;
        for(int j = 1; j<=n; j++){
            s1*= j;
        }
        s+= (float)pow(x,i)/s1;
	}
	cout<<s;// in tong
	return 0;
}
