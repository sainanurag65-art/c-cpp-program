#include<iostream>
#include<map>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String: ";
    cin>>str;

    map<char, int> freq;
    for(char ch: str){
        freq[ch]++;
    }
    cout<<"\ncharacter Frequencies:\n";
    for(auto x: freq){
        cout<<x.first<<"-> "<<x.second<<endl;
    }

}