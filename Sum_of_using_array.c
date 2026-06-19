#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the numbers of digits : ");
    scanf("%d",&n);

    int arr[n];
    int i;
    printf("Enter the numbers: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum is : %d\n",sum);

}