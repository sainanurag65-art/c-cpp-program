#include<stdio.h>
int main(){
    int arr[100], n, i;
    int *ptr, max;
    printf("Enter the Number of elemnets : ");
    scanf("%d",&n);

    printf("Enter the array elements : ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    max = *ptr;
    for(i=0; i<n; i++){
        if(*(ptr +i)>max){
            max = *(ptr + i);
        }
    }
    printf("maximum element is : %d\n",max);
}