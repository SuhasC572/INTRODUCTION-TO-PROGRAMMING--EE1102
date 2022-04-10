#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int myArray[]={1,24,17,4,-5,100};     //Defining a Array myArray
    int *ptr,i;                           // Defining a pointer ptr of type int & a temporary variable i

    ptr=&myArray[0];

    int k=(sizeof(myArray)/sizeof(int)); //Finding the number of elements in the Array

    printf("ELEMENTS OF myArray:\n");
    for(i=0;i<k;i++)
    {
        printf("The element at the location %p is %d\n",(ptr + i), *(ptr+i));   //Printing the Elements and its Location
    }
    return 0;
}