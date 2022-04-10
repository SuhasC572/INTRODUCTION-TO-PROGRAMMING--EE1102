#include<stdio.h>

int main()
{
   int n,  i, j, k;

   int A[13];
   int B[13];
   int C[13];
  
   float count; 
   //For the  first matrix
   for( i = 1 ; i <=12  ; i++){
       printf("\nEnter the value for A[%d] :", i);
       scanf("%d", &A[i]);
   }
    //For the  second matrix
   for( j = 1 ; j <=12  ; j++){
       printf("\nEnter the value for B[%d] :", j);
       scanf("%d", &B[j]);
   }

   //Code for printing matrix A
    printf("Matrix A is:\n");
   for( i = 1 ; i <= 4 ; i++){
       printf("%d \t", A[i]);
   }printf("\n");
    for( i = 5 ; i <= 8 ; i++){
       printf("%d \t", A[i]);
   }printf("\n");
   for( i = 9  ; i <= 12 ; i++){
       printf("%d \t", A[i]);
   }
   

   //Code for printing matrix B
    printf("\nMatrix B is:\n");
   for( j = 1 ; j <= 3 ; j++){
       printf("%d \t", B[j]);
   }printf("\n");
    for( j = 4 ; j <= 6; j++){
       printf("%d \t", B[j]);
   }printf("\n");
   for( j = 7  ; j <= 9 ; j++){
       printf("%d \t", B[j]);
   }printf("\n");
   for( j = 10  ; j <= 12 ; j++){
       printf("%d \t", B[j]);
   }


//Calculating the value of the matrix C
 i = 1;
 j = 1;
 k = 1;
 C[k] = 0;
 
 while( i <= 4 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }

 i = 1;
 j=2;
 k=2;
C[k] = 0;

 while( i <= 4 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }

 i = 1;
j=3;
k=3;
C[k] = 0;
 while( i <= 4 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }
 
i = 5;
j=1;
k=4;
C[k] = 0;
 while( i <= 8 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }

 i = 5;
j=2;
k=5;
C[k] = 0;
 while( i <= 8 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }

 i = 5;
j=3;
k=6;
C[k] = 0;
 while( i <= 8 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }


 i = 9;
j=1;
k=7;
C[k] = 0;
 while( i <= 12 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }

 i = 9;
j=2;
k=8;
C[k] = 0;
 while( i <= 12 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }

 i = 9;
j=3;
k=9;
C[k] = 0;
 while( i <= 12 && j <= 12){
    C[k] = C[k] + A[i]*B[j];
    i++;
    j = j + 3;
 }


  //Code for printing matrix C
    printf("\nMatrix C is:\n");
   for( k = 1 ; k <= 3 ; k++){
       printf("%d \t", C[k]);
   }printf("\n");
    for( k = 4 ; k <= 6 ; k++){
       printf("%d \t", C[k]);
   }printf("\n");
   for( k = 7  ; k <= 9 ; k++){
       printf("%d \t", C[k]);
   }
 
    return 0;
}