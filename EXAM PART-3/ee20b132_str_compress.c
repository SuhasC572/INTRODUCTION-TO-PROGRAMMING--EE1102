#include<stdio.h>
 #include<string.h>
 #define MAX 1000
int main(){



  char myStr[MAX];
  gets(myStr);

char *p = myStr;
int len = strlen(myStr);
char *in = myStr;
int count =0;
int i=0;



for( i = 0; i < len ; i++){
    if((p)==(p+1))
    {
        count++;

        if(count == 1)
        {
            in = p;
        }
        p++;
        printf("%c%d",*(in + i), count);

    }
    else
    {
        memcpy(in+1,p+1,count);
        p=in;
        count =0;
        printf("%c",*(in + i));
    }

}



return 0;

}
