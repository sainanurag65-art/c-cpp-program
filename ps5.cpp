#include<iostream>
using namespace std;
int main(){
    float C, F;
    cout<<"Enter the Temperature in celcius : ";
    cin>>C;

    // formula
    F = (C* 9/5) + 32;
    cout<<"F : "<<F; 
    return 0;
}
