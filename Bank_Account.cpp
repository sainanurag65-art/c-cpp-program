#include<iostream>
using namespace std;
class bank_account{
    public:
    int acc_number;
    char accHolderName[20];
    float balance;

    void input(){
        cout<<"Enter the Account Number: ";
        cin>>acc_number;

        cout<<"Enter the Account Holder Name: ";
        cin>>accHolderName;

        cout<<"Enter the Balance: ";
        cin>>balance;
    }
    void deposit(){
        float amount;
        cout<<"Enter the Deposit Amount: ";
        cin>>amount;

        balance = balance + amount;
        cout<<"Amount Deposited Successfully !"<<endl;
    }
    void withdraw(){
        float amount;
        cout<<"Enter the withdraw amount: ";
        cin>>amount;

        if(amount <=balance){
            balance = balance - amount;
            cout<<"Amount Withdraw Successfully !";
        }
        else{
            cout<<"Insufficient Balance !";
        }
    }
    void Display(){
        cout<<"\n-----Account Details-----"<<endl;
        cout<<"Account Number: "<<acc_number<<endl;
        cout<<"Account Holder Name: "<<accHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    class bank_account b1;
    b1.input();
    b1.deposit();
    b1.withdraw();
    b1.Display();

}