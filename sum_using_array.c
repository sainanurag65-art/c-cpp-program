#include<stdio.h>
int main(){
    int arr[100],i, n, sum= 0;
    int *ptr;
    printf("Enter the Numbers of element : ");
    scanf("%d",&n);

    printf("Enter the array element : ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    for(i=0; i<n; i++){
        sum = sum + *(ptr + i);
    }
    printf("sum = %d",sum);

}