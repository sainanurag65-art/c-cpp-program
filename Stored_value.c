#include<stdio.h>
int main(){
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    int *p = &a;
    //*p = 36;
    printf("The Value of a : %d\n",a);
}