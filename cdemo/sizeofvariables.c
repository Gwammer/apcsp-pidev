
#include<stdio.h>

int main()
{
 	int a = -2400;
	float b = 120.5;
	char c = 'A';
	double d = 1234.64563423421;
	signed int e = -2400;
	short int f = -2400;
  	// print value and size of an int variable
	printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
	printf("float b value: %f and size: %d bytes\n", b, sizeof(b));
	printf("char c value: %c and size: %d bytes\n", c, sizeof(c));
	printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
	printf("signed int e value: %d and size: %d bytes\n", e, sizeof(e));
	printf("short int value: %d and size: %d bytes\n", f, sizeof(f));
}
