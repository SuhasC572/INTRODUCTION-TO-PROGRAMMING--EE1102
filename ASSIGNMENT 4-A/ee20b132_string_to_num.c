#include <stdio.h>
#define MAX 100
#include <math.h>
#include<string.h>
int main()
{
    char string[MAX];
    int a,i,k,z;
    float sum,n;
    sum = 0;
     for(i=0;i<MAX;i++)
    {
        string[i]=0;
    }
    int num;
    puts("Enter the number: ");
    fgets(string, MAX, stdin);
    int l;
    l=strlen(string);
    if(string[0] == '-'){
        a = 1;
    }else{;
        a = 2;
    }
   switch(a)
   {
       case 1:
       for(i=0;i<= l ; i++ )
       {
           if(string[i]=='.'){
               z = i;
           }
       }
       if(z>0)
       {
       for(i=1;i<z;i++)
       {
           k=string[i];
           k=k-48;
           n=(k)*pow(10,z-i-1);
           sum=sum+n;
        }

       for(i=z+1;i<l-1;i++)
       {
           k=string[i];
           k=k-48;
           n=(k)*pow(0.1,i-z);
           sum=sum+n;
        }

       printf("-%f\n",sum);
       }
       else{
            z=l-1;
            for(i=1;i<z;i++)
       {
           k=string[i];
           k=k-48;
           n=(k)*pow(10,z-i-1);
           sum=sum+n;
        }
       printf("-%.0f\n",sum);
       }
       break ;
      case 2:
       for(i=0;i<= l ; i++ )
       {
           if(string[i]=='.'){
               z = i;
           }
       }
       if(z>0)
       {
       for(i=0;i<z;i++)
       {
           k=string[i];
           k=k-48;
           n=(k)*pow(10,z-i-1);
           sum=sum+n;
        }
       for(i=z+1;i<l-1;i++)
       {
           k=string[i];
           k=k-48;
           n=(k)*pow(0.1,i-z);
           sum=sum+n;
        }
         printf("%f\n",sum);
       }
        else{
            z=l-1;
            for(i=0;i<z;i++)
        {
           k=string[i];
           k=k-48;
           n=(k)*pow(10,z-i-1);
           sum=sum+n;
        }
         printf("%.0f\n",sum);
        }
         break;
       default : printf("INVALID INPUT");
   }
    return 0;
}
