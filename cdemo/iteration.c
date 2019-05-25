#include <stdio.h>

int main()
{
  int a = 36;

  for (int i = 0; i < 99; i++)
     {
	if (i % a == 0)
	  {
	    printf("%d, \n", i);
	  }
     } 
}
