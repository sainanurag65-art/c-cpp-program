#include<stdio.h>
int main(){
    int i, num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Counting-:\n");
    for(i=num; i>=1; i--){
        printf("%d\n",i);
    }
}