#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Please Enter a Number :");
    scanf("%d",&num);
    while(num<0){
        printf("Number is Negative \n");
        num=-num;
        
    }
    printf("Now Number is :%d",num);
    getch();
}