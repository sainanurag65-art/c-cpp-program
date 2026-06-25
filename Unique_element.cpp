#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    set<int> s;

    cout<<"Enter the element: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<"Total Unique Elements: "<<s.size();
}