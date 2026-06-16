#include<stdio.h>
int main(){
    int num1;
    printf("Enter the Number : ");
    scanf("%d",&num1);
    if(num1 %2 == 0){
        printf("Number is Even");
    }
    else{
        printf("number is odd");
    }
}