#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char string[100];
    printf("enter your string: \n");
    gets(string);
    int l=strlen(string),n=0;
    double sum, sum_1; // sum_1 is used in finding Binary Representation

    int i;
    for(i=0;i<l;i++)
    {
        if(string[i]=='.')
        {
            n=i;
        }
    }
    if(string[0] != '-')
    {

    if(n>0)
    {
        double sum=0;
        int k;
        for(i=0;i<n;i++)
        {
            k=string[n-1-i];
            if(k>=48 && k<=57)
            {
                k=k-48;
            }
            else
            {
                k=k-55;
            }
            sum=sum+pow(16,i)*k;
        }
        for(i=1;i<=l-(n+1);i++)
        {
            k=string[n+i];
            if(k>=48 && k<=59)
            {
                k=k-48;
            }
            else
            {
                k=k-55;
            }
            sum=sum+pow(16,-i)*k;
        }
        sum_1 = sum;
        printf("Decimal equivalent is %lf\n",sum);

    }
    else
    {
          double sum=0;
           int k;
        for(i=0;i<l;i++)
        {
            k=string[l-1-i];
            if(k>=48 && k<=59)
            {
                k=k-48;
            }
            else
            {
                k=k-55;
            }
            sum=sum+pow(16,i)*k;
        }
        sum_1 = sum;
        printf("Decimal equivalent is %0.lf",sum);
    }
    }else{
          if(n>0)
    {
        double sum=0;
        int k;
        for(i=0;i<(n-1);i++)
        {
            k=string[n-1-i];
            if(k>=48 && k<=57)
            {
                k=k-48;
            }
            else
            {
                k=k-55;
            }
            sum=sum+pow(16,i)*k;
        }
        for(i=1;i<=l-(n+1);i++)
        {
            k=string[n+i];
            if(k>=48 && k<=59)
            {
                k=k-48;
            }
            else
            {
                k=k-55;
            }
            sum=sum+pow(16,-i)*k;
        }
        sum_1 = sum;
        printf("Decimal equivalent is -%lf",sum);
    }
    else
    {
          double sum=0;
           int k;
        for(i=0;i<(l-1);i++)
        {
            k=string[l-1-i];
            if(k>=48 && k<=59)
            {
                k=k-48;
            }
            else
            {
                k=k-55;
            }
            sum=sum+pow(16,i)*k;
        }
        sum_1 = sum;
        printf("Decimal equivalent is -%0.lf",sum);
    }
    }
    //Decimal representation to Binary representation


     double fraD,fraB,bFra = 0.0,dFra,Factor=0.1;
     int dInt,bInt=0;
     int intFactor=1,remainder,temp,j;

    fraD = sum_1;
    dInt = fraD;
    dFra =  fraD - dInt;

    while(dInt!=0){
         remainder=dInt%2;
         bInt=bInt+remainder*intFactor;
         dInt=dInt/2;
         intFactor=intFactor*10;
    }

   for(j=1;j<=10;j++){
      
       dFra = dFra * 2;
       temp =  dFra;
        
       bFra = bFra + Factor* temp;
       if(temp ==1)
             dFra = dFra - temp;

       Factor=Factor/10;
   }
  
   fraB =  bInt +  bFra;
   printf("\n Equivalent binary value: %lf",fraB);
    return 0;
}