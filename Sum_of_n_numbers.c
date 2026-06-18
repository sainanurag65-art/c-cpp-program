#include<stdio.h>
int main(){
    int num, i;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        num*(num+1)/2;
        printf("%d",i);
    }
}