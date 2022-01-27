#include <iostream>
#include <vector>
#define MAX 30
using namespace std;
// dinh nghia
typedef struct Student{// dinh nghia kieu Student
    int id;
    string name;
    string gender;
    float gpa;
};
void menu(Student students[], int &numbers);
void nhap(Student &student);
void nhap(Student students[], int &numbers);
void xuat(Student student);
void xuat(Student students[], int numbers);
vector<Student> timSinhVienTheoGPA(Student students[], int numbers, float gpa);
int main(){
    Student students[MAX];
    int numbers;
    nhap(students,numbers);
    menu(students,numbers);
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
void xuat(Student student){
        cout<<"('id': "<<student.id<<", 'ho ten': "<<student.name<<", 'gioi tinh': "<<student.gender<<", 'gpa': "<<student.gpa<<")"<<endl;
}
void xuat(Student students[], int numbers){
    for(int i=0; i<numbers; i++){
        cout<<"'Sinh vien "<<i+1<<"': ";
        xuat(students[i]);
    }
}
void menu(Student students[], int &numbers){
    int luachon;
    do{
        // in ra man hinh menu
        cout<<"------Menu--------"<<endl;
        cout<<"1.nhap lai"<<endl;
        cout<<"2. xuat danh sach"<<endl;
        cout<<"3. tim sinh vien theo gpa"<<endl;
        // nhap lua chon
        cout<<"Chon chuc nang: ";
        cin>>luachon;
        // xet chuc nang: 
        switch(luachon){
            case 1:
            {
                nhap(students, numbers);
                break;
            }
            case 2:
            {
                xuat(students, numbers);
                break;
            }
            case 3:
            {
                float gpa;
                cout<<"GPA can tim: ";
                cin>>gpa;
                vector<Student> result = timSinhVienTheoGPA(students, numbers, gpa);
                for(Student student:result){
                    xuat(student);
                }
                break;
            }
            default:
            {
                cout<<"Lua chon khong hop le!"<<endl;
                break;
            }
        }
        // xem nguoi dung co muon tiep tuc khong?
        cout<<"Nhan 1 de thoat:";
        cin>>luachon;
    }while(luachon!=1);    
}
vector<Student> timSinhVienTheoGPA(Student students[], int numbers, float gpa){
    vector<Student> result;
    for(int i=0;i<numbers;i++){
        if(students[i].gpa == gpa) {
            result.push_back(students[i]);
        }
    }
    return result;
}
