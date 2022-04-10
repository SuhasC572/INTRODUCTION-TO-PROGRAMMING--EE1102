#include <stdio.h>


int main()
{
    char c;
     int count_digits, count_alphabets, count_symbol, count;
     count_alphabets = 0;
    count_digits = 0;
    count_symbol = 0;
    count = 0;
    do{
        printf("Enter an alphabet:");
        scanf(" %c",&c);
       if( c >= '0' && c <= '9'){
            count_digits++;
        }else if( c >= 'A' && c <= 'z'){
            count_alphabets++;
        } else{
            count_symbol++;
        }
        count++;

    }
    while( c != '?');
    printf("The total number of characters : %d\n", count);
    printf("The number of alphabets : %d\n", count_alphabets); 
    printf("The number of digits : %d\n", count_digits);
    printf("The number of symbols : %d\n", count_symbol); //The total symbols are including the '?' 

    return 0;
}