#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    for(int &i:vec){
        cin>>i;
    }
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}