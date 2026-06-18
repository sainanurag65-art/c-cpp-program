#include<stdio.h>
int main(){
    int num, i =1, sum = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
   
    while(i<=num){
        sum = sum+i;
        i++;
    }
    printf("Sum : %d\n",sum);
}