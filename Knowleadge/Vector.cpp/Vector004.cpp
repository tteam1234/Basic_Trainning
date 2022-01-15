#include<iostream>
using namespace std;
int main(){
    const int array[] = {1,2,3,4,5};
    const int *first = array;
    const int *after = array + sizeof(array)/sizeof(array[0]);
    for(const int *current = first; current < after; current++){
        cout<<*current<<" ";
    }
    cout<<endl;
    for(auto i = std::begin(array);i!=std::end(array);i++){
        cout<<*i<<" ";        
    }
    return 0;
}