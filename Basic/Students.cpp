#include <iostream>
#define MAX 30
using namespace std;
// dinh nghia struct
typedef struct Student{
    int id;
    string name;
    string gender;
    float gpa;
};
void nhap(Student &student);
void nhap(Student students[], int &numbers);
void xuat(Student student);
void xuat(Student students[], int numbers);
int main(){
    Student students[MAX];// khai bao mang students
    int numbers;
    nhap(students,numbers);
    xuat(students,numbers);
    return 0;
}
void nhap(Student &student){
    cout<<"id: ";
    cin>>student.id;
    cout<<"name: ";
    cin>>student.name;
    cout<<"gender: ";
    cin>>student.gender;
    cout<<"gpa: ";
    cin>>student.gpa;
}
void nhap(Student students[], int &numbers){
    // nhap so luong
    cout<<"So luong sinh vien: ";
    cin>>numbers;
    // nhap du lieu tung sinh vien
    for(int i=0; i<numbers; i++){
        cout<<"Sinh vien thu "<<i+1<<" :"<<endl;
        nhap(students[i]);
    }
}
void xuat(Student student){
    cout<<"id: "<<student.id<<endl;
    cout<<"ho ten: "<<student.name<<endl;
    cout<<"gioi tinh: "<<student.gender<<endl;
    cout<<"gpa: "<<student.gpa<<endl;
}
void xuat(Student students[], int numbers){
    for(int i = 0; i < numbers; i++){
        cout<<"Sinh vien thu "<<i+1<<" :"<<endl;
        xuat(students[i]); // xuat sinh vien thu i      
    }
}