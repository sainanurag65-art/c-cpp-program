#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    char name[20];
    float marks;
    void input(){
       

        cout<<"Enter the Roll No.: ";
        cin>>roll;

        cout<<"Enter the Name: ";
        cin>>name;

        cout<<"Enter the Marks: ";
        cin>>marks;
    }

    void show(){
        cout<<"\n-----Student Information----\n";
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    class student s;
    s.input();
    s.show();
    
}