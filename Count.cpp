#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Numbers: ";
    cin>>n;
    int arr[n];
    map<int, int> freq;
    for(int i=0; i<n; i++){
        cout<<"Enter the Elements: ";
        cin>>arr[i];
        freq[arr[i]]++;
     }
    cout<<"Frequency of the elements\n";
    for(auto x: freq){
        cout<<x.first<<"-> "<<x.second<<endl;
    }
}