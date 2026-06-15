#include<stdio.h>
int main(){
    float C, F;    // C = Celcius, F = Fahrenheit
    printf("Enter the temperature in Celcius : ");
    scanf("%f",&C);
    
    // Formula
    F = (C * 9/5) + 32 ;
    printf("F : %.2f",F);     // Print result
    return 0;
}