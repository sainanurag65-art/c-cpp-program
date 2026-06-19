#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of an element: ");
    scanf("%d",&n);
    int number[n];
    int i;
    printf("Enter the  numbers: ");
    for(i=1; i<=n; i++){
    scanf("%d",&number[i]);
    }

    printf("The Number is : \n");
    for(i=1; i<=n; i++){
        printf("%d\n",number[i]);

    }
}
