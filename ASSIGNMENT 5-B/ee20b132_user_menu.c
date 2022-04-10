#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,n,num1,fac,num2,sqr,num3,cube;
    do
    {
        n=0;

    printf("USER MENU\n");
    printf("1:Factorial\n");
    printf("2:Square\n");
    printf("3:Cube\n");
    printf("0:EXIT\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:                                                //Code for finding the factorial
    printf("Enter the number less than 10\n");
    scanf("%d",&num1);
    if(num1>=0 && num1<10)
    {
        fac=1;
        for(i=num1;i>0;i--)
        {
            fac=fac*i;
        }
        printf("The Factorial of entered number is %d\n",fac);
    }
    else
    {
        printf("Invalid input\n");
    }
    break;

    case 2:                                               //Code for finding the square
    printf("Enter the number");
    scanf("%d",&num2);
    sqr=num2*num2;
    printf(" The square of entered number is %d\n",sqr);
    break;

    case 3:                                            //Code for finding the cube
    printf("Enter the number");
    scanf("%d",&num3);
    cube=num3*num3*num3;
    printf("The cube of entered number is %d\n",cube);
    break;

    case 0:                                                //For exiting the code
    exit(0);
    break;

    default:
    printf("Invalid case\n");
    printf("Enter a number between 0 and 4\n");
    break;
    }
    }while(n!=0);
    return 0;
    }
