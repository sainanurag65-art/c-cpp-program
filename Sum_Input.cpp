#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Numbers : ";
    cin>>n;

    vector <int> v;
    int sum = 0;
     for(int i=0; i<n; i++){
        int x;
        cout<<"Enter the element : "<<i + 1 <<": ";
        cin>>x;

        v.push_back(x);
        sum+=x;
     }
     cout<<"Sum :"<<sum;

}