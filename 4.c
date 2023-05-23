//WAP to check a number whether it is odd or even using bitwise operator
//& | >> << ~
#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num&1)// on performing num&1 it returns Last significant bit of num.
    {
        printf("%d is odd.\n", num);
    }
    else
    {
        printf("%d is even.\n", num);
    }

    return 0;
}