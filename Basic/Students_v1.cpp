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
void menu(Student students[], int &numbers);
int main(){
    Student students[MAX];
    int numbers;
    nhap(students, numbers);
    menu(students, numbers);
    return 0;
}
void nhap(Student &student){
    cout<<"id: ";
    cin>>student.id;
    fflush(stdin);
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

void menu(Student students[], int &numbers){
    int luachon;
    do{
        // in ra man hinh menu
        cout<<"------Menu--------"<<endl;
        cout<<"1.nhap lai"<<endl;
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