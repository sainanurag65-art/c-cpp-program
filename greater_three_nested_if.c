#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf("Enter the third number : ");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("First number is Greater: %d",num1);
        }
        else{
            printf("Third number is Greater: %d",num3);
        }
    }
    else{
        if(num2>num3){
            printf("Second number is greater: %d",num2);
        }
        else{
            printf("Third number is greater: %d",num3);
        }
    }    
    }
