#include<stdio.h>
int main()
{
 int a,b;
 char choice;
 printf("enter two numbers");
 scanf("%d %d",&a,&b);
 printf("\n enter an operation (+,-,*,/,%%)");
 scanf(" %c",&choice);

 switch(choice)
 {
  case'+':
   printf("addition = %d\n",a+b);
   break;

  case'-':
   printf("substraction = %d\n",a-b);
   break;

  case'*':
   printf("multilpication = %d\n",a*b);
   break;

  case'/':
   printf("division = %d\n",a/b);
   break;

  case'%':
   printf("remainder = %d\n",a%b);
   break;
   }
   return 0;
   }

















