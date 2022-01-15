#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    for(vector<int>::iterator it = vec.begin();it!=vec.end();it++){// duyệt vector
        cout<<*it<<" ";
    }
    return 0;
}