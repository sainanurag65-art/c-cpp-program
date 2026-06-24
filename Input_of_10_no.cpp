#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;

    for(int i=0; i < 10; i++){
        int x;
        cout<<"Enter the number: "<<i + 1<< " : ";
        cin>>x;
        
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}