# include <stdio.h>
void main()
{
int c;
int a = 10;
int b = 20;
printf("the a and b values before swap is %d and %d \n",a,b);
c=b;
b=a;
a=c;
printf ("the a and b values after swap is %d and %d",a,b);
}