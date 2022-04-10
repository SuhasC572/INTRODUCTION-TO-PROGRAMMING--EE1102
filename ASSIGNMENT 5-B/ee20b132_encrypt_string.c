#include <stdio.h>
#include<math.h>
#include<string.h>
#define MAX 100

int main()
{
 char string[MAX];                                              //Defining the string for taking Input
 int l, i;                                                      // l is for storing the length of the string
 printf("Enter the string to convert :");
 gets(string);                                                 //gets is used to take input from the user


  l = strlen(string);                                          // strlen is used to find the length of the string & is tored in l


  for( i = 0; i < l ; i++){
      if( 'A' <= string[i] && string[i] <='Z'){                //Converting uppercase letters to the lowercase letters
          string[i] = string[i] + 32;
      }else if( 'a' <= string[i] && string[i] <='z' ){         //Converting lowercase letters to the uppercase letters
          string[i] = string[i] - 32;
      }else if ( string[i] == '+'){                             //Converting + to /
          string[i] = '/';
      }else if ( string[i] == '-'){                             //Converting - to *
          string[i] = '*';
      }else if ( string[i] == '*'){                             //Converting * to -
          string[i] = '-';
      }else if ( string[i] == '/'){                             //Converting / to +
          string[i] = '+';
      }else if ( string[i] == ' '){                             //Converting  spcae to $
          string[i] = '$';
      }else if ( string[i] == '$'){                             //Converting $ to space
          string[i] = ' ';
      }else if ( string[i]>=48 && string[i]<=57){               //digit =9-digit
          string[i]=string[i]-48;
          string[i]=9-string[i];
          string[i]=string[i]+48;
      }
                                                             //Anything else will remain intact
      }
   // Code is for reversing the String
    char string_1[MAX];

   for( i = 0 ; i < l ; i++){
       string_1[i] = string[ l - 1 - i];
   }
   string_1[i]='\0';
   printf("Encrypted string :");
   printf("%s", string_1);

    return 0;
}