#include<iostream>
using namespace std;
int main(){
    int arr[100], i, n, sum = 0;
    int *ptr;
    cout<<"Enter the numbers of elements : ";
    cin>>n;

    cout<<"Enter the Array elements : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    
    ptr = arr;
    for(i=0; i<n; i++){
        sum = sum + *(ptr + i);
    }
    cout<<"The Sum is : "<<sum<<endl;


}