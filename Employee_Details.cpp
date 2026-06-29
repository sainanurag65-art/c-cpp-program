#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    char name[20];
    float salary;

    void input(){
        cout<<"Enter the Id: ";
        cin>>id;

        cout<<"Enter the Name: ";
        cin>>name;

        cout<<"Enter the Salary: ";
        cin>>salary;
    }

    void Display(){
        cout<<"\n-----Employee Details-----\n";
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};
int main(){
    class employee emp;
    emp.input();
    emp.Display();
}