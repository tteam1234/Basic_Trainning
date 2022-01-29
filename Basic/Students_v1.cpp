// nhap 1 danh sach sinh vien
// dinh nghia struct
#include<iostream>
#include<vector>
#include<fstream>
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
void vietVaoFile(Student student[], int &numbers, string path);
void xuat(Student student);
void xuat(Student students[], int numbers);
void xuat(Student student);
void xuat(Student students[],Student numbers);
float timGPAThapNhat(Student students[], int numbers);
float timGPACaoNhat(Student students[], int numbers);
vector<Student> timSinhVienTheoGPA(Student students[], int numbers, float gpa);
void swap(Student &student1, Student &student2);
void sapXepTangDan(Student students[], int numbers);
void sapXepGiamDan(Student students[], int numbers);
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
        cout<<"4. tim sinh vien co diem thap nhat"<<endl;
        cout<<"5. sap xep tang dan"<<endl;
        cout<<"6. sap xep giam dan"<<endl;
        cout<<"7. viet vao file"<<endl;
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
                float max = timGPACaoNhat(students, numbers);
                vector<Student> result = timSinhVienTheoGPA(students, numbers,max);
                cout<<"Danh sach sinh vien co diem cao nhat:"<<endl;
                for(Student student : result){
                    xuat(student);
                }
                break;
            }
            case 4:
            {
                float min = timGPAThapNhat(students, numbers);
                vector<Student> result = timSinhVienTheoGPA(students, numbers,min);
                cout<<"Danh sach sinh vien co diem thap nhat:"<<endl;
                for(Student student : result){
                    xuat(student);
                }
                break;
            }
            case 5:
            {
                sapXepTangDan(students, numbers);
                cout<<"Danh sach sinh vien sau khi sap xep tang:"<<endl;
                xuat(students,numbers);
                break;
            }
            case 6:
            {
                sapXepGiamDan(students, numbers);
                cout<<"Danh sach sinh vien sau khi sap xep giam dan:"<<endl;
                xuat(students,numbers);
                break;
            }
            case 7:
            {
                string path = "Basic/Student_v1/data.out";
                vietVaoFile(students, numbers,path);
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
    for(int i=1;i<numbers;i++){
        if(students[i].gpa>max){
            max = students[i].gpa;
        }
    }
    return max;
}
float timGPAThapNhat(Student students[], int numbers){
    float min = students[0].gpa;
    for(int i=1;i<numbers;i++){
        if(students[i].gpa<min){
            min = students[i].gpa;
        }
    }
    return min;
}

vector<Student> timSinhVienTheoGPA(Student students[], int numbers, float gpa){
    vector<Student> result;
    for(int i=0;i<numbers;i++){
        if(students[i].gpa == gpa){
            result.push_back(students[i]);
        }
    }
    return result;
}
void swap(Student &student1, Student &student2){
    Student temp = student1;
    student1 = student2;
    student2 = temp;
}
void sapXepTangDan(Student students[], int numbers){
    for(int i=0;i<numbers-1;i++){
        for(int j=i;j<numbers;j++){
            if(students[i].gpa>students[j].gpa){
                swap(students[i],students[j]);               
            }
        }
    }
}
void sapXepGiamDan(Student students[], int numbers){
    for(int i=0;i<numbers-1;i++){
        for(int j=i;j<numbers;j++){
            if(students[i].gpa<students[j].gpa){
                swap(students[i],students[j]);               
            }
        }
    }
}
void vietVaoFile(Student student[], int &numbers, string path){
    ofstream ofs(path);
    for(int i=0;i<numbers;i++){
        ofs<<student[i].id<<","<<student[i].name<<","<<student[i].gpa<<","<<student[i].gpa<<","<<endl;
    }
    ofs.close();
}