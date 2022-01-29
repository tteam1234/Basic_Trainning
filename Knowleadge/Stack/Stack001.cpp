#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a;
    stack<int> stack;
    // nhap vao stack
    while(cin>>a){
        stack.push(a);
    }
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}