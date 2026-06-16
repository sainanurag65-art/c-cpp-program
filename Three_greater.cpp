#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter the three Numbers:";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<"First number is greater = "<<num1<<endl;
        }
        else{
            cout<<"Third number is greater = "<<num3<<endl;
        }   
    }
    else{
        if(num2>num3){
            cout<<"Second number is greater = "<<num2<<endl;
        }
        else{
            cout<<"Third Number is greater = "<<num3<<endl;
        }
    }
}