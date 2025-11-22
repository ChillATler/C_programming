#include<stdio.h>
void main()

{
//program starts
    int a;
    int b;
    int c;
    printf("enter the number in a\n");
    scanf("%d",&a);
    printf ("enter the number in b\n");
    scanf("%d",&b);
    printf ("enter the number in c\n");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("%d is big value\n",a);
        if(b>c)
        {
            printf("%d is medium value\n",b);
            printf("%d is small value\n",c);
        }
        else
        {
            printf("%d is medium value\n",c);
            printf("%d is small value\n",b);
        }
    }
    else if(b>a&&b>c)
    {
        printf("%d is big value\n",b);
        if(a>c)
        {
            printf("%d is medium value\n",a);
            printf("%d is small value\n",c);
        }
        else
        {
            printf("%d is medium value\n",c);
            printf("%d is small value\n",a);
        }
    }
    else if(c>a&&c>b)
    {
        printf("%d is big value\n",c);
        if(a>b)
        {
            printf("%d is medium value\n",a);
            printf("%d is small value\n",b);
        }
        else
        {
            printf ("%d is medium value\n",b);
            printf ("%d is small value\n",a);
        }
    }
//program ends
}