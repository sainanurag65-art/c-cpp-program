#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter the First Number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);

    printf("-----Before Swapping-----\n");
    printf("First Number is (a) : %d\n",a);
    printf("Second number is (b) : %d\n",b);


    //Logic
    temp = a;
    a = b ;
    b = temp ;
     printf("-----After Swapping-----\n");
     printf("First Number is (a) : %d\n",a);
     printf("Second number is (b) : %d\n",b);

}