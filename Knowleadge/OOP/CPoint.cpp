#include<iostream>
using namespace std;
class Point{
    private:
        float x, y;
    public:
        //method
        void setX(float _x);
        float getX();
        void setY(float _y);
        float getY();
};
void Point::setX(float _x){
    this->x = _x;
}
float Point::getX(){
    return this->x;
}
void Point::setY(float _y){
    this->y = _y;
}
float Point::getY(){
    return this->y;
}

int main(){
    Point A;
    A.setX(3);
    A.setY(5);
    cout<<"("<<A.getX()<<","<<A.getY()<<")"<<endl;
    return 0;
}