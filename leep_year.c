#include<conio.h>
#include<stdio.h>
int main(){
    int year;
    printf("Enter Year :");
    scanf("%d",&year);
    if(year%100!=0){
        if(year%4==0)
        printf("Leep Year :");
        else
        printf("Not Leep Year :");
    }
    else{
        if(year%400==0)
        printf("Leep Year :\n");
        else 
        printf("Not Leep Year");
    }
    getch();
}