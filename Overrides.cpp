#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw(){
        cout<<"This is a Shape !"<<endl;
    }
};
class rectangle: public shape{
    public:
    void draw() override{
        cout<<"This is a rectangle!"<<endl;
    }
};
int main(){
    shape * s = new rectangle;
    s->draw();
}


