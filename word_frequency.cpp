#include<iostream>
#include<map>
#include<sstream>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter the Sentence: ";
    getline(cin,sentence);

    map<string, int> freq;
    string word;

    stringstream   ss (sentence);

    while(ss>>word){
        freq[word]++;
    }
    for(auto x: freq){
        cout<<x.first<<"->"<<x.second<<endl;
    }

}