#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("Enter Two Number :");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("Bigger Number :%d\n",a);
    }
    else{
        printf("Bigger Number :%d",b);
    }
    getch();
    
}