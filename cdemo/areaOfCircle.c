#include <stdio.h>

const double pi = 3.14159265897;
double areaOfCircle(double r){
double result = r*r*pi;
return result;
}
int main(){
for(double i = 3.5; i < 13.5; i++){
double r = i;
double get = areaOfCircle(r);
printf("The area of a circle with radius %f is %f\n",r, get);
}
}
