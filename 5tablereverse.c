#include<stdio.h>

void main()
{
    int n;
    printf("upto how many values are required\n");
    scanf("%d",&n);

    for (int a=n; a>=1; a--)
    {

        printf("5*%d=%d\n",a,a*n);

    }
    printf ("program stops");

}