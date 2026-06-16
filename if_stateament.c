#include<stdio.h>
int main(){
int age;
printf("Enter the Age : ");
scanf("%d",&age);
if(age>=18){
    printf("You are eligible for Vote !");
}
else{
    printf("inValid");
}
}
