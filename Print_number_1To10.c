#include<stdio.h>
int main(){
    int i, num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Counting-:\n");
    for(i=1; i<=num; i++){
        printf("%d\n",i);
    }
}