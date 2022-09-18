//program to find the factorial for the given number using recurssion
#include <stdio.h>
//recursion factorial
int fact(int n)
{
  if(n>1)
  return n*fact(n-1);
  else
  return 1;
}
int main()
{
    int a;
    printf("\nEnter the number for factorial: ");
    scanf("%d",&a);
    printf("\nFactorial of the given number is: %d",fact(a));

    return 0;
}
