#include<iostream>
using namespace std;
int main(){
    char op;
    int num1, num2, result;
    cout<<"Enter the Operator(+,-,*,/):";
    cin>>op;
    cout<<"Enter the First number: ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    switch(op){
        case '+':
        cout<<"Result = "<<num1 + num2;
        break;

        case '-':
        cout<<"Result = "<<num1 - num2;
        break;

        case '*':
        cout<<"Result = "<<num1 * num2;
        break;

        case '/':
        if(num2!=0){
            cout<<"Result = "<<num1/num2;
        }
        else{
            cout<<"Division by zero is not allowed!";
        }
        break;

        default:
        cout<<"Invalid choice!";

    }    
    



}



