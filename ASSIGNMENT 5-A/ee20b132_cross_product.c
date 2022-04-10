#include <stdio.h>
#include<math.h>
#include<string.h>
#define MAX 3


int main()
{
    float vector_1[MAX]; //Array to store the Input values of First vector
    float vector_2[MAX]; //Array to store the Input values of Second vector
    float vector_3[MAX]; //Array to store the cross product of the two vectors
    int i;
    int a; //a is just a variable used in defining the components of vector
    int i1, i2; //i1 and i2 are used in calculation of the cross product

   printf("Enter the values for the First vector :\n");
    for(i=0; i < MAX ; i++){
        a = 120;  //As 120 is the Ascii value of x 
        a = a + i;
        printf("%c component: ", a);
        scanf("%f", &vector_1[i]);

    }

   printf("Enter the values for the Second vector :\n");
    for(i=0; i < MAX ; i++){
        a = 120;
        a = a + i;
        printf("%c component: ", a);
        scanf("%f", &vector_2[i]);

    } 
 

    for( i = 0; i < MAX ; i++){
        i1 = i + 1;
        i2 = i + 2;


        if( i1 >= 3){
            i1 = i1 - 3;
        }else{

        }
        if( i2 >= 3){
            i2 = i2 - 3;
        }else{
            
        }

        vector_3[i] = (vector_1[i1]*vector_2[i2]) - (vector_1[i2]*vector_2[i1]);
    }

    printf("\nCross product of the two vectors:");
    for(i=0; i < MAX ; i++){
        a = 120;
        a = a + i;
        printf("\n%c component: ", a);        
        printf("%f", vector_3[i]);
    }    


    return 0;
}