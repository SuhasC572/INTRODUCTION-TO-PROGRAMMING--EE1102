#include <stdio.h>
#include<math.h>

int main()
{
 float N, x_n, x_n1,  error;
 int i = 0;

 printf("Enter a value for N : ");
 scanf("%f", &N);

 x_n = N/2.0;

 while( error > 0.00001 || i < 100)
 {
     x_n1 = (1.0/3.0)*(2.0*x_n + (N/(x_n*x_n)));  //The equation is found by Simplifing the Newton Raphson Method 
     error = (x_n1*x_n1*x_n1) - N;                  
     
     if(error < 0.0){
         error = -error;                      //If the error is negetive then the loop will stop in Middle & we won't get the required answer
      }
      x_n = x_n1;
     i++;
     
    
 }

 printf("The value of Cube root of %f is %f", N, x_n1);

    return 0;
}
