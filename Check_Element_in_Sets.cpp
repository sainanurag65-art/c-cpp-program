#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s = {10,20, 30, 40, 50};

    int num;
    cout<<"Enter the number to Search: ";
    cin>>num;

    if(s.find(num)!=s.end()){
        cout<<"Element Found!";
    }
    else{
        cout<<"Element Not Found !";
    }
}