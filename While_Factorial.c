#include<stdio.h>
int main(){
    int n, i=1, factorial = 1;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(i<=n){
        factorial=factorial*i;
        i++;
    }
    printf("The Factorial is : %d\n",factorial);
}