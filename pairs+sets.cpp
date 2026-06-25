#include<iostream>
#include<set>
using namespace std;
int main(){
    set<pair<int, int>> s;
    s.insert({1, 2});
    s.insert({3, 4});
    for(auto p: s){
        cout<<p.first<<" "<<p.second<<endl;
    }

    


}