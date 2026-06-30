#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"This is the Base class!";
    }
};

class derived: public base{
    public:
    void show(){
        cout<<"This is the Derived class!";
    }
};
int main(){
    base *b;
    derived d;
    b = &d;
    b->show();
}