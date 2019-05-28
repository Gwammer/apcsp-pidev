#include <stdio.h>

int main()
{
	int random=4;
	for (int i = 0; i <= 100; i++)
		{
			if (i%random==0)
			{
				printf("%d is devisible by %d\n",i,random);
			}
			else
			{
				printf("%d is not devisible bt %d\n",i,random);
			}
		}
}
