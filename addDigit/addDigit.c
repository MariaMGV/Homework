#include<stdio.h>

int addDigit(int a, int b);

int main(void)
{
  int a = 1;
  int b = 4;
  int result = addDigit(a,b);
   printf("The result is %d\n",result);

    return 0;
}

int addDigit(int a, int b)
{
    return a + b;
}