#include<stdio.h>
int main(){
    int n, i;
    long long factorial = 1;
    printf("Enter the Number :  ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        factorial = factorial * i;
    }
    printf("Factorial of the %d = %lld",n, factorial);

}