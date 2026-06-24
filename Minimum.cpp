#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers : ";
    cin>>n;

    vector <int> v;
    
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int min = v[0];

    for(int i=1; i<v.size(); i++){
         if(v[i]<min)
        {
        min = v[i];
        }

    }
   

cout<<"The Minimum is : "<<min;
}