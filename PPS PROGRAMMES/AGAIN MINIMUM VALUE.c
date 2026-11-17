#include<stdio.h>
int main()
{
    int a[100],n,i,min;


    printf("enter the number of elements");
    scanf("%d",&n);

    printf("enter the array elements");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    min = a[0];

    for(i=1;i<n;i++)
        {
            if (a[i] < min)
        {
            min = a[i];
        }
        }

    printf("minimum element = %d",min);

    return 0;

    }
