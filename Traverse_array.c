#include<stdio.h>
int main(){
    int arr[100], i, n;
    int *ptr;
    printf("Enter the numbers of element : ");
    scanf("%d",&n);

    printf("Enter the array element : ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    printf("The array element is\n");
    for(i=0; i<n; i++){
        printf("%d\n",*(ptr + i));
    }

}