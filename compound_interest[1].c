;//program to calculate compound interest 
#include<stdio.h>
#include<math.h>
int main(){
int p,t;
float r,ci;


printf("enter principal amount:\n ");
scanf ("%d",&p);

printf("enter rate of interest:\n ");
scanf ("%f",&r);

printf("enter period: ");
scanf ("%d" ,&t);

ci=p*pow((1+r/100),t);

printf ("compound interest is %f\n");
return 0;
}