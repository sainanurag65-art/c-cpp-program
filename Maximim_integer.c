#include<stdio.h>
int maximum(int a ,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("Maximum Integer is : %d\n",maximum(num1, num2));
}