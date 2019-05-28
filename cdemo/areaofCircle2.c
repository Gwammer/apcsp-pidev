#include <stdio.h>

float areaOfCircle(float radius) 
{
  float area = (3.14159265358979323846 * radius * radius);
  return area;
}

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    printf("Bound %d is %s\n", arg, argv[arg]);
    arg++;
  }
  float lower, upper;
  printf("Enter a lower bound:\n");
  scanf("%f", &lower);
  printf("Enter an upper bound:\n");
  scanf("%f", &upper);
  for (float radius = lower; radius <= upper; radius++)
    {
	float result = areaOfCircle(radius);
	printf("Area at r = %f: %f\n", radius, result);
    }
}
