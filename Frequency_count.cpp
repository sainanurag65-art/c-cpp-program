#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,1,1,1,2,3,1,1};
    map<int, int> freq;

    for(int i=0; i<11; i++){
        freq[arr[i]]++;
    }
    for(auto x: freq){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    cout<<freq.size()<<endl;

}