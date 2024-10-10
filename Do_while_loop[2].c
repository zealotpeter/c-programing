
// do while loop
#include<stdio.h>
int main(){
int start ,sum=0,stop;
printf ("enter a value for when to stop");
scanf ("%d",&stop);

printf ("enter a value for when to start");
scanf ("%d",&stop);

do{
printf ("%d ",start);
start++;

sum+=start;
}while(start<=stop);
printf ("the sum is %d",sum);

return 0;
}