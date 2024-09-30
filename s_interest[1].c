//program to calculate simple interest 
#include<stdio.h>
int main(){
int p;
float r;
int t;
printf("enter principal amount: ");
scanf ("%d",& p);
printf("enter rate: ");
scanf ("%f",&r);
printf("enter period: ");
scanf ("%d" ,&t);
int sum=p*t*r/100;
printf("%d",sum);
return 0;
}