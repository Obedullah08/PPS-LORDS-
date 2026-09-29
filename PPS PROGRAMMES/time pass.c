#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("a is greatest number");
    }
    else if (b >= a && b >= c)
    {
        printf("b is greatest number");
    }
    else
    {
        printf("c is greatest number");
    }

    return 0;
}



































