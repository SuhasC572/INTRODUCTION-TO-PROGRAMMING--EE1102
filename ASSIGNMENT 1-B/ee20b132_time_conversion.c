
#include<stdio.h>

int main()
{
double second;
double minutes;
double hours;

printf("Enter the time in seconds\n");
scanf("%lf", &second);

minutes = second/60;
hours = second/3600;

printf("The time %.2lf seconds is equal to %.4lf minutes.\n", second, minutes);
printf("The time %.2lf seconds is equal to %.4lf hours.\n", second, hours);
return 0;
}
