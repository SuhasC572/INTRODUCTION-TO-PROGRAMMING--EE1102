#include<stdio.h>

int main()
{
// Input values for First vector
int x1; 
int y1; 
int z1; 

printf("Enter the value for X component of First vector:");
scanf("%d", &x1);

printf("Enter the value for Y component of First vector:");
scanf("%d", &y1);

printf("Enter the value for Z component of First vector:");
scanf("%d", &z1);

//Input values for Second vector

int x2; 
int y2; 
int z2; 

printf("Enter the value for X component of Second vector:");
scanf("%d", &x2);

printf("Enter the value for Y component of Second vector:");
scanf("%d", &y2);

printf("Enter the value for Z component of Second vector:");
scanf("%d", &z2);

// Dot product of the Two vectors

int dot_product;

dot_product = x1*x2 + y1*y2 + z1*z2;

printf("\n The dot product of the two vectors is %d", dot_product);
return 0;
}