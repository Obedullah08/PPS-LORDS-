#include <stdio.h>

int main()
{
    int a[2][2], b[2][2],c[2][2], sub[2][2];

    printf("Enter elements of first matrix:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Enter elements of third matrix:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }

    // substracting three matrices
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sub[i][j] = a[i][j] - b[i][j] - c[i][j];
        }
    }

    printf("substraction of three matrices:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
