#include<iostream>
using namespace std;
int main(){
    int num;
    int *ptr;
    cout<<"Enter the number :";
    cin>>num;
    ptr = &num;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<num<<endl;
    cout<<*ptr<<endl;

}