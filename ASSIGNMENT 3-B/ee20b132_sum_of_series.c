#include<stdio.h>

int main()
{
   int n,  i;
   printf("Enter a value for n: \n");
   scanf("%d", &n);
   float count;
   if( n <= 0){
       printf("Invalid entry");
   } else{
   for( i = 1 ; i <= n ; i++){
       count = count + (float)1/i;
   }

   printf("Sum is %f", count);

       }
           return 0;
}
