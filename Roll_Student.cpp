#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size: ";
    cin>>n;

    map<int, string> student;
    for(int i=0; i<n; i++){
        int roll;
        string name;
        cout<<"Enter the Roll Number and Name: ";
        cin>>roll>>name;
        student[roll] =  name;
    }
    cout<<"\nStudents Soarted By the roll number:\n ";
    for(auto x: student){
        cout<<"Roll No.: "<<x.first<<" "<<"Name: "<<x.second<<endl;
    }
    
}