// nhap 1 danh sach sinh vien
// dinh nghia struct
#include<iostream>
#define MAX 30
using namespace std;
typedef struct Student{
    int id;
    string name;
    string gender;
    float gpa;
};
void nhap(Student &student);
void nhap(Student students[], int &numbers);
int main(){
    Student students[MAX];
    int numbers;
    nhap(students, numbers);
    return 0;
}
void nhap(Student &student){
    cout<<"id: ";
    cin>>student.id;
    cout<<"ho ten: ";
    getline(cin,student.name);
    cout<<"gioi tinh: ";
    getline(cin,student.gender);
    cout<<"gpa: ";
    cin>>student.gpa;
}
void nhap(Student students[], int &numbers){
    // nhap so luong sinh vien
    cout<<"So luong:";
    cin>>numbers;
    // nhap sinh vien
    for(int i=0;i<numbers;i++){
        // nhap tung sinh vien
        nhap(students[i]);
    }
}