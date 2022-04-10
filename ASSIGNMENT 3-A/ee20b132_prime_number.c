#include<stdio.h>
int main()
{
    int n, a, i;
    float r;
    printf("Enter the Value for n :\n");
    scanf("%d",&n);
    i=1;

    while(i<=n)
    {
        r=n%i;
        if(r==0)
        {
            a++;
        }
        i++;
    }
    if(a>2)
    {
        printf("%d is  not a prime number\n",n);
    }
    else
    {
        printf("%d is a prime number\n",n);
    }
    return 0;
}
