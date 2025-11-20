#include<stdio.h>

void main()
{ 
int a;
    printf("program starts\n");
    printf ("enter the number\n");
    scanf ("%d",&a);
    if (a%2==0)
    {
    printf ("%d is even number\n",a);
    }
    else
    {
    printf("%d is odd number",a);
    }
}