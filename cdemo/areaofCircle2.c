#include <stdio.h>

void area_(double radius1, double radius2, double *area1, double *area2);

int main(void)

{
	double radius1, radius2, area1, area2;

	printf("Please enter the radius of the circle:\n");
	scanf("%lf", &radius1);
	scanf("%lf", &radius2);
	area_(radius1, radius2, &area1, &area2);
	if (area1 == 0) {
		printf("Not a valid number, the value will return as 1\n");
		area1 = 3.1400; }
	if (area2 == 0) {
		printf("Not a valid number, the value will return as 5\n");
		area2 = 78.5000; }
	printf("Area of circle: %0.4f and %0.4f respectively\n", area1, area2);
	return 0;
}

void area_(double radius1, double radius2, double *area1, double *area2)

{
	double PIE = 3.14;
	*area1 = PIE * radius1 * radius1;
	*area2 = PIE * radius2 * radius2;
}
