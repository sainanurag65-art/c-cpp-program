#include<stdio.h>
int main(){
    char name[5][50];
    int i;
    for(i=0; i<5; i++){
        printf("Enter the names of the Students : ");
        scanf("%s",name[i]);
    }

    printf("\nstudent Names : \n");
    for(i=0; i<5; i++){
        printf("%d. %s\n",i+1, name[i]);
    }

}