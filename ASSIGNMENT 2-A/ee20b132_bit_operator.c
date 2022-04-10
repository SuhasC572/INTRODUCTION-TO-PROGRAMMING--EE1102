#include <stdio.h>

int main()
{
    int num, n, bit_at_nth_place;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    
    printf("Enter the value of n : ");
    scanf("%d", &n);

   
    bit_at_nth_place = (num >> n) & 1;

    printf("The bit in the %d th postion of %d is %d", n, num, bit_at_nth_place);

    return 0;
}
