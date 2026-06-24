#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {10, 20, 30, 40, 50};
    int sum = 0;
    
    for(int i=0; i<v.size(); i++){
        sum+=v[i];
    }
    cout<<"Sum :"<<sum<<endl;
} 