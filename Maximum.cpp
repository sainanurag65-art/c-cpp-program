#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;

    int arr[n];
    int i;
    cout<<"Enter the numbers : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    for(i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest element :"<<largest<<" "<<endl;
}