#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    for(std::vector<int>::reverse_iterator it = vec.rbegin(); it!=vec.rend(); it++){
        cout<<*it<<" ";
    }
    return 0;
}