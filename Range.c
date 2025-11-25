#include<stdio.h>

void main()
{
    int num;
    printf("enter the number\n");
    scanf ("%d",&num);
    int min =num>=-3;
    int max =num<=4;
    int check =min && max;
    printf("%d is in the range of -3 and 4 is %d ",num,check);
}
