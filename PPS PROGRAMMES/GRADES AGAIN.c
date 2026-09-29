#include<stdio.h>
int main()
{
 int marks;
 printf("enter marks:");
 scanf("%d",&marks);

 if (marks >= 90)
 {
  printf("congartulations A GRADE");
  }
 else if (marks >= 75)
 {
  printf("B GRADE");
  }

 else if (marks >= 60)
 {
  printf("C GRADE");
  }


else if (marks >= 40)
 {
  printf("D GRADE");
  }

 else
 {
  printf("FAIL");

  }

  return 0;
  }







