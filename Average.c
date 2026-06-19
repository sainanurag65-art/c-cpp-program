#include<stdio.h>
int main(){
    int n, sum = 0;
    float Average;
    printf("Enter the Number of digits:  ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the numbers : ", n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    Average = (float)sum/n;
    printf("The Average is : %.2f\n", Average);
}