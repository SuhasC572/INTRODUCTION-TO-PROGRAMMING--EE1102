#include<stdio.h>
#define max 10000

//Code for the first sub question
int sstrlen(char *s)
{
    int n1=0;
    while(*s!='\0')
    {
        if(*s=='\n')
        {
            s++;
            continue;
        }
        n1++;
        s++;
    }
    return n1;
}

//Code for the Second sub Question
char *sstrcpyn( char *s,int n2)
{
    char *a,*u;
    u=s;                     //We  used U because the s value would be changed while finding the value of the length of the string
    int n1,i;
    char ns[max];
    while(*s!='\0')
    {
        if(*s=='\n')
        {
            s++;
            continue;
        }
        n1++;
        s++;
    }
    if(n2<=n1)
    {
       for(i=0;i<n2;i++)
        {
        ns[i]=*u;
        u++;
        }
    }
    else
    {

    }
    a=ns;
    return a;
 }

 //Code for the Third Question
int sstrcmpn(char *s1,char *s2,int n3)
{
    int p=0,i;
    for(i=0;i<n3;i++)
    {
        if(*s1==*s2)      //Comparing the two strings
        {
            s1++;
            s2++;
            p++;
        }
    }
    if(p==n3)
    {
        return 1;
    }
    else
    {
     return 0;
    }

}


int main()
{
    char string[max],string1[max],string2[max];
    int l,n2,n3;
    printf("Enter the first string: \n");
    fgets(string1,max,stdin);
    printf("Enter the second string: \n");
    fgets(string2,max,stdin);
    printf("The length of the string is :");
    printf("%d\n",sstrlen(string1));
    printf("Enter the value of n for Number of elements in first string: ");
    scanf("%d",&n2);
    printf("\n The first %d elements for first string is : ", n2);
    printf("%s\n",sstrcpyn(string1,n2));
    printf("Enter the value of n for which the elements have to be compared :");
    scanf("%d",&n3);
    if(sstrcmpn(string1,string2,n3))
    {
     printf("\nMATCH - The first %d elements of both the strings are same", n3);
    }
    else
    {
        printf("\nNO MATCH - The first %d elements of both the strings are not same", n3);
    }
    return 0;
}
