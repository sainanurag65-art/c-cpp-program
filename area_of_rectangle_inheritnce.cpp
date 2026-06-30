#include<iostream>
using namespace std;
class shape{

    protected:
    int length, width;
    public:
    void input_data(){
        cout<<"Enter the Length: ";
        cin>>length;
        cout<<"Enter the width: ";
        cin>>width;
    }
};
class rectangle: public shape{
    public:
    void area(){
        cout<<" The area of the rectangle is: "<<length * width<<endl;
    }
};

int main(){
    rectangle r;
    r.input_data();
    r.area();
}