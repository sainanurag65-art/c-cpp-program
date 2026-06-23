#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;

}
int main(){
    int num1, num2;
    cout<<"enter the two numbers : ";
    cin>>num1>>num2;
    swap(&num1, &num2);
    cout<<num1<<endl;
    cout<<num2;
}


    

