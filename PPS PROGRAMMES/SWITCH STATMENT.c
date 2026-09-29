#include<stdio.h>
int main()
{
 int choice;
 int a=10,b=2;
 printf("1.addition\n");
 printf("2.substraction\n");
 printf("3.multiplication\n");
 printf("4.division\n");

 printf("enter your choice");
 scanf("%d",&choice);

 switch(choice)
 {
    case 1:
    printf("sum = %d",a+b);


    case 2:
    printf("sub = %d",a-b);
    break;

    case 3:
    printf("multi = %d",a*b);
    break;

    case 4:
    printf("div = %d",a%b);
    break;

    default:
    printf("invalid");
    }

    return 0;
    }




























