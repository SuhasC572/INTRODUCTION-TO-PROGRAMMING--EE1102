#include <stdio.h>
int main()
{
int n;
   int remainder;
   int count;
   printf("Enter number :\n ");
   scanf("%d",&n);
   while(n!=0)
   {
       remainder =n%10;
       count++;
       if(count%2 !=0)
       {
           printf("%d",remainder);
       }
       n=n/10;

   }
   return 0;
}