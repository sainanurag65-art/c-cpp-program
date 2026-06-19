#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the numbers : ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int second_largest = arr[0];
    for(i=0; i<n; i++){
        if(arr[i]>largest){
           second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest= arr[i];
        
        }
    }
    printf("Second Largest is : %d\n",second_largest);
    
}