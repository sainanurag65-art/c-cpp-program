#include<stdio.h>
int main(){
    char str[100];
    int i=0, lenght = 0;
    printf("Enter the String : ");
    scanf("%s",&str);
    while(str[lenght]!='\0'){
        lenght++;
    }
    printf("Reverse String : ");
    for(i=lenght-1; i>=0; i--){
        printf("%c",str[i]);
    }

}