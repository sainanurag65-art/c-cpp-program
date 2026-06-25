#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> num = {90, 80, 80, 70, 50, 40, 40, 30, 10, 20, 60};
    
        if(num.find(180)!=num.end()){
            cout<<"Found!";
        }
        else{
            cout<<"Not Found!";
        }
    
        
    }
