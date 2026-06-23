#include<stdio.h>
int main(){
    int a, b;
    int *p1, *p2;
    printf("enter the Two numbers : ");
    scanf("%d %d",&a, &b);
    p1 = &a;
    p2= &b;
    printf("The sum is : %d\n",*p1 + *p2);
}