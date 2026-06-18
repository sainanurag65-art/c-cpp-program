#include<stdio.h>
int factorial( int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
    }
    return fact;

}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Factorial is : %d\n",factorial(n));
}