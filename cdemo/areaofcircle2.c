#include <stdio.h>

const double pi = 3.14159265897;
double areaOfCircle(int r)
{
double result = r*r*pi;
return result;
	}
int main(){
int f;
int l;
	printf("Enter the starting point of the range\n");
	scanf("%d",&f);
	printf("Enter the ending point of the range\n");
	scanf("%d",&l);
for(int i = f; i <= l; i++){
int r = i;
double get = areaOfCircle(r);
printf("The area of a circle with radius %d is %f\n",r, get);
}
}
