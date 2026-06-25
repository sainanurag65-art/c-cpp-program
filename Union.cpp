#include<iostream>
#include<set>
using namespace std;
int main(){
    int a[] = {1,2,3};
    int b[] = {3,4,5};

    set<int> s;

    for(int x: a){
        s.insert(x);
    }
    for(int x: b){
        s.insert(x);
    }
    for(int x: s){
        cout<<x<<" ";
    }
}