#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string path = "Knowleadge/File/out.txt";// đường dẫn
    ofstream ofs(path);// khai báo biến
    string data = "data"; 
    if(ofs.is_open()){
        ofs<<data;
    }
    ofs.close();
    return 0;
}