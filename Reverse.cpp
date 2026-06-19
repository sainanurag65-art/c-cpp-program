#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;

    int arr[n];
    int i;
    cout<<"Enter the nunbers : ";
    for(i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"The number is:"<<endl;
    for(i=n-1; i>=0; i--){
    cout<<arr[i]<<" "<<endl;
    }
}