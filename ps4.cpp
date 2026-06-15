#include<iostream>
using namespace std;
int main(){
float P, R, T, SI;
cout<<"Enter the Principle : ";
cin>>P;
cout<<"Enter the rate : ";
cin>>R;
cout<<"Enter the Time : ";
cin>>T;

// Formula
SI = (P*R*T)/100;
cout<<"Simple Interest is : "<<SI<<endl;
return 0;
}