#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the Marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"GRADE 'A'";
    }
    else if(marks>=75 && marks<=89){
        cout<<"GRADE 'B'";
    }
    else if(marks>=60 && marks<=74){
        cout<<"GRADE 'C'";
    }
    else if(marks>=33 && marks<=59){
        cout<<"GRADE 'D'";
    }
    else if(marks<33){
        cout<<"FAIL!";
    }
}