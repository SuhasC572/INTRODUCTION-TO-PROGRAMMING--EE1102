#include <stdio.h>
#include<math.h>

int main()
{
  float array[15],   swap;
  int n, a, k, c;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (a = 0; a < n; a++)
    scanf("%f", &array[a]);

  for (a = 0 ; a < n - 1; a++)
  {
    for (k = 0 ; k < n - a - 1; k++)
    {
      if (array[k] < array[k+1]) 
      {
        swap       = array[k];
        array[k]   = array[k+1];
        array[k+1] = swap;
      }
    }
  }

  printf("Array in descending order:\n");

  for (c = 0; c < n; c++){
     printf("%f \t", array[c]);
  }

  return 0;
}