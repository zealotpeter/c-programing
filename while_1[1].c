
//while loop
#include<stdio.h>
int main(){
int i=0,sum=0;

while (i<50){
printf ("%d \n",i);
i++;
sum=sum+i;
sum+=i;
}
printf ("the sum is %d",sum);

return 0;
}