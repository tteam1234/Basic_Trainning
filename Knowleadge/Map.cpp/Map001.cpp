#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, int> map;
    map[0] = 1;
    map[1] = 2;
    map[2] = 3;
    for(std::map<int,int>::iterator it = map.begin(); it != map.end();it++){
        cout<<"{"<<it->first<<","<<it->second<<"}";
    }
    return 0;
}