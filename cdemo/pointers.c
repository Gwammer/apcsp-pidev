#include <stdio.h>
int main()
{
	int a;
	int* ptrtoa;

	ptrtoa = &a;

	a=5;
	printf("The value of a is %d\n",a);

	*ptrtoa = 6;
	printf("The value of a is %d\n",a);

	printf("The value of ptrtoa is %d\n", ptrtoa);
	printf("It stores the value %d\n", *ptrtoa);
	printf("The address of a is %d\n", &a);

	int d;
	int e;
	int* add;
	int* ade;
	add = &d;
	ade = &e;
	d=18;
	e=4;
	printf("The value of d and e is %d and %d\n",d,e);
	printf("The address of d and e is %d and %d\n",&d,&e);

	int temp;
	temp=d;
	*add=e;
	*ade=temp;
	printf("The value of d and e is %d and %d\n",d,e);

}
