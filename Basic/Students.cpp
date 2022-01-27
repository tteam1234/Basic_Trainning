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
void menu(Student students[], int &numbers);
void nhap(Student &student);
void nhap(Student students[], int &numbers);
void xuat(Student student);
void xuat(Student students[], int numbers);
bool tonTaiSinhVien(Student students[], int numbers, int id);
Student timKiemSinhVienTheoMa(Student students[], int &numbers, int id);//id = 3
Student timSinhVienCoGPACaoNhat(Student students[], int &numbers);
Student timSinhVienCoGPANhoNhat(Student students[], int &numbers);
int main(){
    Student students[MAX];// khai bao mang students
    int numbers;
    nhap(students,numbers);// nhap
    menu(students,numbers);
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
bool tonTaiSinhVien(Student students[], int numbers, int id){
    bool tontai = false;// nhan dinh
    for(int i = 0; i < numbers; i++){
        if(students[i].id == id){
            tontai = true;
            break;
        }
    }
    return tontai;
}
Student timKiemSinhVienTheoMa(Student students[], int &numbers, int id){// 003
    Student result;
    for(int i = 0; i < numbers; i++){
        if(students[i].id == id){
            result = students[i];
        }
    }    
    return result;
}
void menu(Student students[], int &numbers){
    int luachon;
    do{
        // xu li
        cout<<"---------Menu---------"<<endl;
        cout<<"1. Nhap lai"<<endl;
        cout<<"2. xuat danh sach"<<endl;
        cout<<"3. tim kiem sinh vien theo ma"<<endl;
        cout<<"4. tim kiem sinh vien co diem cao nhat"<<endl;
        cout<<"5. tim kiem sinh vien co diem thap nhat"<<endl;
        // chon chuc nang
        cout<<"Chon chuc nang: ";
        cin>>luachon;
        switch(luachon){
            case 1: {
                nhap(students,numbers);
                break;
            }
            case 2: {
                xuat(students,numbers);
                break;
            }
            case 3: {
                int idcantim;
                cout<<"Nhap ma sinh vien can tim: ";
                cin>>idcantim;
                if(tonTaiSinhVien(students,numbers,idcantim)){
                    xuat(timKiemSinhVienTheoMa(students,numbers,idcantim));
                } else {
                    cout<<"Khong co sinh vien can tim!"<<endl;
                }
            }
            case 4: {
                cout<<"Sinh vien co diem cao nhat: "<<endl;
                xuat(timSinhVienCoGPACaoNhat(students,numbers));
                break;
            }
            case 5: {
                cout<<"Sinh vien co diem thap nhat: "<<endl;
                xuat(timSinhVienCoGPANhoNhat(students,numbers));
                break;
            }
            default: {
                cout<<"Lua chon khong hop le!!!";
                break;
            }
        }
        // nhap lua chon de thoat
        cout<<"Nhan phim 1 de thoat!";
        cin>>luachon;
    }while(luachon!=1);
}
Student timSinhVienCoGPACaoNhat(Student students[], int &numbers){
    Student max = students[0];
    for(int i=1;i<numbers;i++){
        if(students[i].gpa>max.gpa){
            max = students[i];
        }
    }
    return max;
}
Student timSinhVienCoGPANhoNhat(Student students[], int &numbers){
    Student min = students[0];// moc nho nhat la dau tien
    for(int i=1;i<numbers;i++){
        if(students[i].gpa<min.gpa){
            min = students[i];
        }
    }
    return min;
}