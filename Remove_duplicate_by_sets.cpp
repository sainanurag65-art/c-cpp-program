#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    set<int>s;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    cout<<"Array after removing Duplicates : ";

    for(int x: s){
        cout<<x<<" ";
    }
}