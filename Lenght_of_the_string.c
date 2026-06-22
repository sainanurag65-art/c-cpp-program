#include<stdio.h>
int main(){
    char str[100];
    int i=0, lenght = 0;
    printf("Enter the String: ");
    scanf("%s",&str);
    while(str[i]!=0){
        lenght++;
        i++;
    }
    printf("The Lenght Of the string is : %d",lenght);
}