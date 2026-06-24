#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numebers : ";
    cin>>n;

    vector <int> v;

    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter the Elements: "<<i + 1<<": ";
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        if(v[i] % 2 == 0){
            cout<<"Even Numbers : "<< v[i]<<" ";
        }
    }
}