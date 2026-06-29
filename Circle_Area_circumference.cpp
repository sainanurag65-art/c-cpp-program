#include<iostream>
using namespace std;
class circle{
    public:
    float radius;
    float pie = 3.14;

    void input(){
        cout<<"Enter the radius of the circle: ";
        cin>>radius;

    }
    void area(){
        cout<<"The area of the Circle is : "<<pie*radius*radius<<endl;
    }
    void circumference(){
        cout<<"The Circumference is : "<<2*pie*radius<<endl;
    }

    void display(){
        cout<<"The Radius of the circle is: "<<radius<<endl;
    }

};
int main(){
    class circle c;
    c.input();
    c.display();
    c.area();
    c.circumference();
}