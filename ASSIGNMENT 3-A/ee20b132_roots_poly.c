#include <stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, e, g, h, r1, r2;

 printf(" The Equation is of the form ax^2 + bx + c \n");

 printf("Enter a value for a:\n");
 scanf("%f", &a);

 printf("Enter a value for b:\n");
 scanf("%f", &b);

 printf("Enter a value for c:\n");
 scanf("%f", &c);

 d = b*b - 4.0*a*c;

 if( d < 0.0){
     d = (-1)*d;
     e = sqrt(d);  // e is a variable for storing square root of the discriminant
     g = -b/(2.0*a); // g is the real part of the root
     h = e/(2.0*a); // h is the complex part of the root

    printf("Equation %.2fx^2 + %.2fx + %.2f has complex roots.\n", a, b, c);
    printf("First root = %.2f + %.2fi\n",g, h);
    printf("Second root = %.2f - %.2fi\n",g, h);
 }else if( d == 0){
      e = sqrt(d);  // e is a variable for storing square root of the discriminant
     g = -b/(2.0*a); // g is the real part of the root
     h = e/(2.0*a); // h is the complex part of the root

    printf("Equation %.2fx^2 + %.2fx + %.2f has real and equal roots.\n", a, b, c);
    printf(" %.2f is the root of the equation %.2fx^2 + %.2fx + %.2f\n", g, a, b, c);


 }else{
     e = sqrt(d);  // e is a variable for storing square root of the discriminant
     g = -b/(2.0*a); // g is the real part of the root
     h = e/(2.0*a); // h is the complex part of the root

    printf("Equation %.2fx^2 + %.2fx + %.2f has real roots.\n", a, b, c);
    r1 = g + h;
    r2 = g - h;
    printf("First root is %.2f", r1);
    printf("Second root is %.2f", r2);

 }

return 0;
}