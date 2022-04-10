#include <stdio.h>

void swap(int *a , int *b ){     //  function to swap the Variables
    int c;                        //Temporary variable
    c = *a;
    *a = *b;
    *b = c;
}


int main(){
    int Var1,Var2;

    printf("Enter the First Variable :");    //Taking Input of the Variables
    scanf("%d", &Var1);

    printf("\nEnter the Second Variable :");
    scanf("%d", &Var2);

    printf("The Values of Var1 and Var2 Befor swaping are %d and %d respectively.", Var1, Var2);

     swap(&Var1,&Var2);     //We send the Address of Var1 and Var2  
                            //Pass by Reference

    printf("\nThe Values of Var1 and Var2 After swaping are %d and %d respectively.", Var1, Var2);

    return 0;
}
