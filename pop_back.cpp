#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    vector<int>v = {1, 2, 3, 4, 5};

    v.pop_back();
    for( int x : v);
    cout<< x <<" ";

}