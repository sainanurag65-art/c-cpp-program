#include<iostream>
using namespace std;
// Abstract class
class shape{
    public:
    virtual void draw() = 0;
};
//derived class 
class circle : public shape{
    public:
    void draw(){
        cout<<"Drawing Circle!"<<endl;
    }
};
//Derived class
class rectangle: public shape{
    public:
    void draw(){
        cout<<"Drawing rectangle!"<<endl;
    }
};
int main(){
    shape * s;
    circle c;
    rectangle r;
    s = &c;
    s ->draw();
    s = &r;
    s ->draw();

}
    