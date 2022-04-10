#include <stdio.h>

int main()
{
	int p, t;
	float m, r;
	printf("Enter the required details:\n");
	printf("Principal (Rs): ");
	scanf("%d", &p);
	printf("Rate of interest (%%): ");
	scanf("%f", &r);
	printf("Number of days: ");
	scanf("%d", &t);
	m = p *(1 + r / 100 * (t / 365));
	printf("Maturity amount is Rs. %f\n", m);
	return 0;
}