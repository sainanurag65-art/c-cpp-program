#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"Animal Eating!"<<endl;

    }
};
class dog: public animal{
    public:
    void bark(){
        cout<<"Dog is barking!"<<endl;
    }
};
int main(){
    dog d;
    d.eat();
    d.bark();

}
