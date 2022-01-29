#include <iostream>
#include <map>
using namespace std;
void duyetMap(map<int,int> map);
int main(){
    map<int, int> map;
    map[0] = 1;
    map[1] = 2;
    map[2] = 3;
    duyetMap(map);
    return 0;
}
void duyetMap(map<int,int> map){
    for(std::map<int,int>::iterator it = map.begin(); it != map.end();it++){
        cout<<"{"<<it->first<<","<<it->second<<"}";
    }
}