#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    int arr[n];
    int i;
    cout<<"Enter the elements : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The Number is : "<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}