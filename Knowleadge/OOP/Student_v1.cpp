#include <iostream>
using namespace std;
class Student{
    private:
        string id;
        string name;
        float math;
        float physical;
        float chemistry;
    public:
    // method
    Student();
    Student(string id, string name, float math, float physical, float chemistry);
    void display();
    float getGPA();
};
Student::Student(){
    this->id = "None";
    this->name = "None";
    this->math = 0;
    this->physical = 0;
    this->chemistry = 0;
}
Student::Student(string id, string name, float math, float physical, float chemistry){
    this->id = id;
    this->name = name;
    this->math = math;
    this->physical = physical;
    this->chemistry = chemistry;
}
void Student::display(){
    cout<<"id: "<<this->id<<endl;
    cout<<"name: "<<this->name<<endl;
    cout<<"mark: "<<this->math<<" "<<this->physical<<" "<<this->chemistry<<endl;
    cout<<"gpa: "<<getGPA();
}
float Student::getGPA(){
    return (this->math+this->physical+this->chemistry)/3;
}
int main(){
    Student student = Student("001","Minh Anh",7,8,7);
    student.display();
    return 0;
}