#include<stdio.h>

int main()
{
float speed;
float time;
float distance_covered;

printf(" Enter the Speed of the vechicle  (km/hr):\n");
scanf("%f", &speed);

printf("Enter the Time Duration of the journey (hrs):\n");
scanf("%f", &time);

distance_covered = speed*time;


printf("Speed of the vechicle (km/hr): %.2f\n", speed);
printf("Time Duration of the journey (hrs):%.2f\n ", time);
printf("In %.2f hrs, a vehicle travelling at %.2f km/hr covers %.2f km", time, speed, distance_covered);

return 0;
}