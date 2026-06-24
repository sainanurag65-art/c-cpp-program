#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ={10, 76, 54, 23,51};
    int maxElement = v[0];

    for(int i=1; i<v.size(); i++){
        if(v[i]>maxElement){
            maxElement = v[i];
        }
        cout<<"Maximum Element : "<<maxElement<<endl;;

    }
    }