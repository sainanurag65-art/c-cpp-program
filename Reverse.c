#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the numbers : ",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array in Reverse order:\n");
    for(i=n-1; i>=0; i--){
        printf("%d",arr[i]);
    }
}