#include <stdio.h>

int hex_len(int n)  //Finding the number of Characters
{
    int r=16,l=0;
    while(n>15)
    {
        n=n/16;
        l++;
    }
    return l+1;
}  


void dec2Hex(int n)        //For finding the Hexadecimal Equivalent of the Given Decimal
{
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) {
            int temp = 0;
            temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
         printf("%c",hexaDeciNum[j]);
}


int main(){
    int n;
    int L;

    printf("Enter the whole number :");
    scanf("%d", &n);

    
    printf("The Values %d in hexadecimal is ", n);
    dec2Hex(n);

    L = hex_len(n);
    printf("\nThe number of characters in the Hexadecimal Representation are %d", L);


    return 0;
}
