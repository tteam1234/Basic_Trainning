#include <vector>
#include<iostream>
#include<fstream>
using namespace std;
vector<int> readFile(string path);
void swap(int *a, int *b);
void bubleSort(string path, vector<int> &vector);
void print(vector<int> vector);
void printFile(string path, vector<int> vector);
void bubleSort(vector<int> &vector);
int main(){
    int n;
    string folder = "testcase/Basic012/";
    for(int i = 1; i <=4;i++){
        string in = (folder + to_string(i)) +".in";
        string out = (folder + to_string(i))+".out";
        vector<int> data = readFile(in);
        bubleSort(out, data);
        print(data);
        cout<<endl;
        printFile(out,data);
    }    
    return 0;
}
vector<int> readFile(string path){
    vector<int> result;
    std::ifstream in(path);
    // in.open(path,ios_base::in);
    if(in.is_open()){
        int x; 
        in>>x;
        int temp;
        for(int i = 0; i < x; i++){
            in>>temp;
            result.push_back(temp);
        }
    }
    in.close();
    return result;
}
void swap(int *a, int *b){
     int temp = *a; 
    *a = *b; 
    *b = temp; 
}
void bubleSort(string path, vector<int> &vector){
    ofstream os(path);
     int i, j; 
    for (i = 0; i < vector.size(); i++){     
    os<<"step "<<i+1<<": ";
    // Last i elements are already in place 
    for (j = 0; j < vector.size()-i-1; j++){
        if (vector[j] > vector[j+1]) 
            swap(&vector[j], &vector[j+1]);
    }
    for(int k=0; k < vector.size(); k++){
                os<<vector[k]<<" ";
    }
    os<<endl;
    }
}
void print(vector<int> vector){
     for(int i:vector){
        cout<<i<<" ";
    }
}
void printFile(string path, vector<int> vector){

}