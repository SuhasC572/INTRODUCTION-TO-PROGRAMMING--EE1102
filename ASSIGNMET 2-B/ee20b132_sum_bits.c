#include <stdio.h>
int main()
{
    int  i, N, bit, count;
    count = 0;
printf("Enter an value:\n");
scanf("%d", &N);

for(i=sizeof(int); i >=0; i--)
{
    bit = ( N >> i) & 1;
    if( bit == 1){
        ++count;
    }
}
printf("%d", count);

return 0;
}