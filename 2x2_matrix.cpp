#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
    int i, j;
    cout<<"Enter the 4 element : ";
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

}
}