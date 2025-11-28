#include<stdio.h>

void main()
{//using For loop
    for (int a=14; a>=3; a--)
    {
        if(a%2==0)
        {
            printf("a=%d is even\n",a);
        }
        else
        {
            printf("a=%d is odd\n",a);
        }

    }
    printf ("program stops");

}
