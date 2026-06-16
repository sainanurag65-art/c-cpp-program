#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    if(num>0){
        cout<<"Number is Positive!";
    }
    else if(num ==0){
        cout<<"ZERO!";
    }
    else{
        cout<<"Number is Negetive!";
    }
}