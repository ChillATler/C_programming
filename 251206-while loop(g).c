#include<stdio.h>

void main()
{
    int pin;

    while(pin != 1234) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
    }
    printf("Unlocked!");
}