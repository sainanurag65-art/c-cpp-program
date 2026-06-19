#include<stdio.h>
int main(){
    int n;
    printf("Enter the numberof Elements : ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the numbers : ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int smallest = arr[i];
    for(i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }

    }
    printf("smallest Element : %d",smallest);
}