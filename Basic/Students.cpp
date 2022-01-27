#include <iostream>
#define MAX 30
using namespace std;
// dinh nghia
typedef struct Student{// dinh nghia kieu Student
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
    nhap(students,numbers);
    return 0;
}
void nhap(Student &student){
    cout<<"Id: ";
    cin>>student.id;
    cout<<"ten: ";
    cin>>student.name;
    cout<<"gioi tinh: ";
    cin>>student.gender;
    cout<<"gpa: ";
    cin>>student.gpa;    
}
void nhap(Student students[], int &numbers){
    // nhap so luong
    cout<<"so luong: ";
    cin>>numbers;
    // nhap tung students
    for(int i=0; i<numbers; i++){
        cout<<"Sinh vien thu "<<i+1<<" : "<<endl;
        nhap(students[i]);
    }
}