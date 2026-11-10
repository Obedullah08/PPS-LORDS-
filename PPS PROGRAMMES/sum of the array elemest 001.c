
#include <stdio.h>

int main()
{
    int drg[6];
    int sum = 0;

    printf("Enter 6 integers: ");

    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &drg[i]);
        sum = sum + drg[i];
    }

    printf("Displaying integers:\n");

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", drg[i]);
    }

    printf("Sum of 6 integers = %d", sum);

    return 0;
}
