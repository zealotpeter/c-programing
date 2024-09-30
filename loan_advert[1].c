;//program to calculate compound interest 
#include<stdio.h>
int main(){
int age;
float income;

printf("enter your age:\n ");
scanf ("%d",&age);

printf("enter annual income :\n ");
scanf ("%f",& income);

if(age>=21, income>=21000){
printf("congrats you can the loan:\n");
}
else{
printf("sorry,you can't get loan:\n");
}
return 0;
}