#include<stdio.h>
#include<math.h>
int main()
{
    int N,K;
    int num=1,den=1;
    double NCK=1;

    printf("enter N value: \n");
    scanf("%d",&N);

    printf("enter K value:\n");
    scanf("%d",&K);

    int h=K;
    if(K>N || K<0|| N<0)
    {
        printf("Invalid entry\n");
    }
    else
    {
       if(K > N/2){
    
        K=N-K;
       }

        int i,j,l;

        l=N;
         for(j=1;j<=K;j++)
         {
           num=num*l;
           l--;
         }

         for(i=K;i>0;i--)
        {
        den=den*K;
        K--;
        }
    NCK=num/den;
    printf("binomial coefficient%dC%d=%.2lf",N,h,NCK);
    }
    return 0;
}