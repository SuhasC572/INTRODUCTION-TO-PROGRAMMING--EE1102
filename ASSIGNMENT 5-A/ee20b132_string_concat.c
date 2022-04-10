#include<stdio.h>
int main()
{
    char s1[20],s2[20],cs[40];
    int i=0,j;
    printf("Enter the first string\n");
    gets(s1);     //gets is used to take input from the user
    printf("Enter the second string\n");
    gets(s2);
   while(s1[i]!='\0')
    {

        cs[i]=s1[i]; // the string s1 is getting stored in the concatinated string 
        i++;
    }
    j=i; // it is used to continue the string
    i=0;
    while(s2[i]!='\0')
    {
        cs[j]=s2[i];
        j++;
        i++;
    }
    cs[j]='\0';
    printf("Concatinated string \n%s",cs);
    return 0;
}
