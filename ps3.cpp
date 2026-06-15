#include<iostream>
using namespace std;
int main(){
int a, b, temp;
cout<<"Enter the first Number : ";
cin>>a;
cout<<"Enter the second Number :";
cin>>b;

cout<<"-----Before Swapping-----"<<endl;
cout<<"First Number (a) is : "<<a<<endl;
cout<<"Second Number (b) is : "<<b<<endl;
 temp = a;
 a = b;
 b = temp;
cout<<"-----After Swapping-----"<<endl;
cout<<"First Number (a) is : "<<a<<endl;
cout<<"Second Number (b) is : "<<b<<endl;
return 0;

}