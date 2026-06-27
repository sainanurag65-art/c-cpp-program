#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    
    


    m[103] = "Anurag";
    m[102] = "Rahul";
    m[101] = "Ayushi";
    

    for(auto x: m){
       cout<<x.second<<endl;
    }

}