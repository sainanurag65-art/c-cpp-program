#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i;
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.pop_back();

    for(i=0; i< v.size(); i++){
        cout<<v[i] <<" ";
    }
}