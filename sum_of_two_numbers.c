#include<stdio.h>

    int add(int a, int b){
        return a + b;
    }
    int main(){
        int a,b;
        printf("Enter the Two Number : ");
        scanf("%d %d",&a,&b);
        int result = add(a,b);
        printf("Sum is : %d",result);
    }

    
    

