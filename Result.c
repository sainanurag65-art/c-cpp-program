#include<stdio.h>
int main(){
    int marks;
    printf("Enter the Marks : ");
    scanf("%d",&marks);
    if(marks>=90){
        printf("GRADE 'A'");
    }
    else if(marks>=75 && marks<=89){
        printf("GRADE 'B'");
    }
    else if(marks>=60 && marks<=74){
        printf("GRADE 'C'");
    }
    else if(marks>=33 && marks<=59){
        printf("GRADE 'D'");
    }
    else if(marks<33){
        printf("Fail");
    }
}