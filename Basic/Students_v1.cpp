// nhap 1 danh sach sinh vien
// dinh nghia struct
#include<iostream>
#include<vector>
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
void xuat(Student student);
void xuat(Student students[], int numbers);
void xuat(Student student);
void xuat(Student students[],Student numbers);
float timGPACaoNhat(Student students[], int numbers);
vector<Student> timSinhVienCoGPACaoNhat(Student students[], int numbers);
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
        cout<<"2.xuat"<<endl;
        cout<<"3. tim sinh vien co diem cao nhat"<<endl;
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
                vector<Student> result = timSinhVienCoGPACaoNhat(students, numbers);
                cout<<"Danh sach sinh vien co diem cao nhat:"<<endl;
                for(Student student : result){
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
float timGPACaoNhat(Student students[], int numbers){
    float max = students[0].gpa;
    for(int i=1;i<=numbers;i++){
        if(students[i].gpa>max){
            max = students[i].gpa;
        }
    }
    return max;
}
vector<Student> timSinhVienCoGPACaoNhat(Student students[], int numbers){
    vector<Student> result;
    float max = timGPACaoNhat(students, numbers);
    for(int i=0;i<numbers;i++){
        if(students[i].gpa == max){
            result.push_back(students[i]);
        }
    }
    return result;
}