#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of elements: ";
    cin>>n;
    int arr[n];
    int i;
    int sum = 0;
    cout<<"Enter the numbers : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<endl;
        sum = sum + arr[i];
    }
    cout<<"The Sum is : "<<sum<<endl;
}