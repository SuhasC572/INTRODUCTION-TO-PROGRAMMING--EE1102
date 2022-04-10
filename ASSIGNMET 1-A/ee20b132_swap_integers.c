#include<stdio.h>
int main()
{

int x;
int y;

printf("Enter a value for First variable \n ");
scanf("%d", &x);

printf("Enter a value for Second variable \n ");
scanf("%d", &y);

printf("x = %d \n y = %d\n ", x, y);


// Second part of the question swapping of the variables.

int third_variable;
third_variable = y;
y = x;

// We are using Third variable because the second variable will be overwritten (Line 21)

x = third_variable;

printf("After swapping:\n x = %d\n y = %d\n", x, y);

return 0;
}
