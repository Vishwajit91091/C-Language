#include<stdio.h>
#include<conio.h>
int main(){
    int x,y,quo,rem;
    
    printf("Enter Two Number :");
    scanf("%d%d",&x,&y);
    if(y){
        quo=x/y;
        rem=x%y;
        printf("Quotient of Number :%d\n",quo);
        printf("Reminder of Number :%d",rem);
    }
    else{
        printf("Number Is Divisibal By Zero :");
    }
    getch();
}