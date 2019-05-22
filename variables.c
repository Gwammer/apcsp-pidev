#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int tmp;

  a = 2;
  c = a + b;
  tmp = a;
  a = c;
  c = tmp;

  printf("Sum of %d and %d is %d\n", a, b, c);
}
