#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int, float> student;

    cout<<"Enter the Roll No.: ";
    cin>>student.first;

    cout<<"Enter the Marks: ";
    cin>>student.second;

    cout<<"\nRoll No.: "<<student.first;
    cout<<"\nMarks: "<<student.second;
}

