#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int, string> student;

    cout<<"Enter the Roll No.: ";
    cin>>student.first;

    cout<<"Enter the Name: ";
    cin>>student.second;

    cout<<student.first<<"  "<<student.second<<endl;
}