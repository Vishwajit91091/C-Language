#include<conio.h>
#include<stdio.h>
int main(){
    float m1,m2,m3,m4,total,per;
    char grade;
    printf("Enter Marks of Subject :");
    scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
    total=m1+m2+m3+m4;
    per=total/4;
    if(per>=95)
        grade='A';
    else if (per>=70)
        grade='B';
    else if (per>=55)
        grade='C';
    else if (per>=40)
        grade='D';
    else if (per>=30)
        grade='E';
    else
        grade='F'; 
        printf("Percentage is %f,Grade is %c\n",per,grade);
        getch();               
      
    


}