#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "Hello";
    char str2[50];
    strcpy(str2, str1);
    printf("%s",str2);
}