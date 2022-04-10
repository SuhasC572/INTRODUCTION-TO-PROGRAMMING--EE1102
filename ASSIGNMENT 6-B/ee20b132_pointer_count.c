#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 500           //Defining the Maximum Input of the Array
int vc,cc,scc;
int is_vowel(int k)         //Program to find the Vowels in the Input given by the user
{
    if(k==65 || k==97)           //ASCII values of Small letter a & capital letter A
    {
        return 1;
    } else if(k==69 || k==101)   //ASCII values of Small letter e & capital letter E
    {
        return 1;
    }  else if(k==73 || k==105)  //ASCII values of Small letter i & capital letter I
    {
        return 1;
    }  else if(k==79 || k==111)  //ASCII values of Small letter o & capital letter O
    {
        return 1;
    }  else if(k==85 || k==117)  //ASCII values of Small letter u & capital letter U
    {
        return 1;
    }
    else {
        return 0;
    }
}
int is_consonant(int k)      //Program to find the Consonants in the Input given by the user 
{
    if((k>=65 && k<=90) || (k>=97 && k<=122))
    {
        if(k==65 || k==97)
    {
        return 0;
    } else if(k==69 || k==101)
    {
        return 0;
    }  else if(k==73 || k==105)
    {
        return 0;
    }  else if(k==79 || k==111)
    {
        return 0;
    }  else if(k==85 || k==117)
    {
        return 0;
    }
    else{
        return 1;
    }
    }
    else{
        return 0;
    }
}
void char_count(char *str)   //Program to find the Special Characters in the Input given by the user
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        vc+=is_vowel(str[i]);
    }
    for(i=0;i<strlen(str);i++)
    {
        cc+=is_consonant(str[i]);
    }
    scc=strlen(str)-(vc+cc);

}
int main()              //Main function
{
    char string[max];
    int i;
    printf("Enter Your string :");
    fgets(string,max,stdin);
    char_count(string);
    printf("Vowels              :");
        for(i=0;i<vc;i++)
        {
            printf("-");
        }
        printf("\n");
    printf("Constants           :");
        for(i=0;i<cc;i++)
        {
            printf("-");
        }
        printf("\n");
    printf("Special characters  :");
        for(i=0;i<scc;i++)
        {
            printf("-");
        }
        printf("\n");
        return 0;
}
