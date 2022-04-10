#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 200
int main()
{
    char string[max],*c;
    c=&string[0];
    int k,i;
    printf("Enter Your string :");
    fgets(string,max,stdin);                    //Taking Input from the User
    k=strlen(string);                      //Finding the length of the Array
    for(i=k-1;i>=0;i--)
    {
        printf("%c",*(c+i));        //Printing the string the reverse order
    }
return 0;
}
