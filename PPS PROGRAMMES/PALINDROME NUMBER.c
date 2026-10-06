#include<stdio.h>
int main()
{
 int n,original,remainder,reverse = 0;


 printf("enter your number:");
 scanf("%d",&n);
 original = n;

 while (n != 0)
 {
  remainder = n % 10;
  reverse = reverse *10 + remainder;
  n = n/10;
  }

  if (reverse = original)
  printf("the given number is a palindrome number",original);

  else
  printf("the given number is not a palindrome number");

  return 0;
  }

























































