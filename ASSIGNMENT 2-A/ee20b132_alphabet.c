#include <stdio.h>


int main()
{
    char c;
    printf("Enter an alphabet:\n");
    scanf("%c",&c);
    int a;
    if((c>='a' && c<='z') || (c>='A' && c<='Z') )
    {
        printf("Ascii value is %d",(int)c);
        printf("\n");
        a=(int)c;
    if(a%2==0)
    {
        return 0;
    }
    else
    {
        for(int i=1;i<=5;i++)
        {
            printf("%c ",(char)(((int)c)-i));
        }
    }
    }
    else
    {
        printf("\nInvalid input");
    }
    return 0;
}