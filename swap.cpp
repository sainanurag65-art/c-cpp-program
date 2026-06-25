#include<iostream>
#include<utility>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the two Numbers : ";
    cin>>a>>b;

    pair<int, int> swap = {b,a};
    a = swap.first;
    b = swap.second;

    cout<<"--After the swapping--\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}