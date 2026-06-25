#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s = {25, 10, 40, 5, 30};

    cout<<"Minimum Element is: "<<*s.begin()<<endl;
    cout<<"Maximum Element is: "<<*s.rbegin()<<endl;
}