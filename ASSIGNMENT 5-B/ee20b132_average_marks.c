#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
float *mark;                                            //Defining a pointer mark
float sum=0;                                            //Defining the sum
int n,i;                                                //Temporary variables for the code
printf("Enter the Total number of students:");
scanf("%d",&n);
mark=(float*)malloc(sizeof(float)*n);
for(i=0;i<n;i++)
{
    printf("Enter the marks of %d student :",i+1);
    scanf("%f",&mark[i]);
    sum=sum+mark[i];
}
printf("\n\nThe Average of marks is %f",sum/n);
free(mark);                                        //the remaining space alloted is freed
return 0;
}