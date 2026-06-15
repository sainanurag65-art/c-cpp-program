#include<stdio.h>
int main(){
 int T;  //time
 float P, R; //Principle and Rate.
 float SI;
 printf("Enter the principle : ");
 scanf("%f",&P);               // User Give the Principle
 printf("Enter the Rate : ");
 scanf("%f",&R);                // User Give the rate
 printf("Enter the Time : ");
 scanf("%d",&T);                  // userGive the Time

// Formula
SI = (P*R*T)/100;
printf("The Simple Interest is : %.2f", SI);        // Print the Result

    return 0;
}