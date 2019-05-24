#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 38.295;
  float e = 68.283;
printf("The value of d is %f, and the value of ptrtod is %d\n",d, &d);
   printf("The value of e is %f, and the value of ptrtoe is %d\n",e, &e);
  float* ptrtod;
  float* ptrtoe;
  ptrtod = &d;
  ptrtoe = &e;  

  int temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;

  printf("The value of d is %f\n", d);
  printf("The value of e is %f\n", e);
}
