#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0,rem;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("sum of digit =%d",sum);
    getch();

}