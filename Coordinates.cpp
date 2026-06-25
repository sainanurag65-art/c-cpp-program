#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int, int> point;

    cout<<"Enter the First Point: ";
    cin>>point.first;

    cout<<"Enter the Second Point: ";
    cin>>point.second;

    cout<<"The coordinates are: ("<<point.first<<", "<<point.second<<")";
}