#include<stdio.h>

int main()
{
    int d1, d2, m1, m2, y1, y2, diff_y, diff_m, diff_d, weeks;
    printf("Enter date 1 (dd/mm/yy): ");
    scanf("%d/%d/%d",&d1,&m1,&y1);

    printf("\nEnter date 2 (dd/mm/yy): ");
    scanf("%d/%d/%d",&d2,&m2,&y2);

    if (d1 > 31 || d2 > 31 || m1 > 12 || m2 > 12 ){
        printf("Invalid Input");
    }else {

    if(d2 < d1)
    {      
      
        if (m2 == 3)//For february
        {
           d2 += 28;
        }
        else if(m2 == 5 || m2 == 7 || m2 == 10 || m2 == 12) // For April, June, September, November
        {
           d2 += 30; 
        }
        else //For remaining months
        {
           d2 += 31;
        }
        // Adding the days from the month m2 to the day days in d2
        m2 = m2 - 1;
    }

    if (m2 < m1)
    {
        m2 += 12;
        y2 -= 1;
        //Adding the maonths to m2 from the year y2
    }       

    diff_d = d2 - d1;
    diff_m = m2 - m1;
    diff_y = y2 - y1;

    weeks = diff_d/7;
     
     diff_d = diff_d%7;

     printf("Diffrence: %d years, %d months, %d weeks and %d days", diff_y, diff_m, weeks, diff_d);

    
    }

    return 0; 
}