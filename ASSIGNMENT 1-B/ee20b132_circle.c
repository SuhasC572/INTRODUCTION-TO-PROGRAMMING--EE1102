
#include<stdio.h>

int main()
{
 double radius;
 double circumference;
 double area;
 double pi;

 pi = 3.14159;

 printf("Enter the value for radius (in units): \n");
 scanf("%lf", &radius);

 circumference = 2*pi*radius;
 area = pi*radius*radius;

 printf("Circumference of the cirle of radius %.2lf units is %.3lf units.\n", radius, circumference);
  printf("Area of the cirle of radius %.2lf units is %.3lf square units.\n", radius, area);


return 0;
}