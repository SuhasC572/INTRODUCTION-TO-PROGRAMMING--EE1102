#include<stdio.h>

int main()
{
float annual_income, total_income_tax, income_tax, income_tax1, income_tax2, income_tax3, income_split1, income_split2, income_split3, health_edu, surcharge, total_tax;
printf("Enter the Annual income of the person:\n");
scanf("%f", &annual_income);
if(annual_income <= 250000){
    printf("NIL Income tax");
}else if(annual_income>250000.0 && annual_income<=500000.0)
{
income_split1 = annual_income - 250000;
income_tax1 = income_split1*(5.0/100.0);
income_tax = income_tax1;
health_edu = income_tax*(4.0/100.0);
total_income_tax = income_tax + health_edu;

printf("If the annual income of the person is Rs. %.2f , then\n", annual_income);
printf("Total  Income tax = Rs %.2f\n", income_tax);
printf(" No Surcharge \n");
printf("Health and Education Cess : Rs %.2f\n", health_edu);
printf("Total tax = %.2f", total_income_tax);

}else if(annual_income>500000.0 && annual_income<=1000000.0)
{
    income_split1 = 500000 - 250000;
    income_tax1 = income_split1*(5.0/100.0);
    income_split2 = annual_income - 500000;
    income_tax2 = income_split2*(20.0/100.0);
    income_tax = income_tax1 + income_tax2;
    health_edu = income_tax*(4.0/100.0);
    total_income_tax = income_tax + health_edu;

printf("If the annual income of the person is Rs. %.2f , then\n", annual_income);
printf(" Total Income tax = Rs %.2f\n", income_tax);
printf(" No Surcharge \n");
printf("Health and Education Cess : Rs %.2f\n", health_edu);
printf("Total tax = %.2f", total_income_tax);

}else if(annual_income>1000000.0 && annual_income<=5000000.0)
{
    income_split1 = 500000 - 250000;
    income_tax1 = income_split1*(5.0/100.0);
    income_split2 = 1000000 - 500000;
    income_tax2 = income_split2*(20.0/100.0);
    income_split3 = annual_income - 1000000;
    income_tax3 = income_split3*(30.0/100.0);
    income_tax = income_tax1 + income_tax2 + income_tax3;
    health_edu = income_tax*(4.0/100.0);
    total_income_tax = income_tax + health_edu;

printf("If the annual income of the person is Rs. %.2f , then\n", annual_income);
printf(" Total Income tax = Rs %.2f\n", income_tax);
printf(" No Surcharge \n");
printf("Health and Education Cess : Rs %.2f\n", health_edu);
printf("Total tax = %.2f", total_income_tax);

}else if(annual_income>5000000.0 && annual_income<=10000000.0)
{
    income_split1 = 500000 - 250000;
    income_tax1 = income_split1*(5.0/100.0);
    income_split2 = 1000000 - 500000;
    income_tax2 = income_split2*(20.0/100.0);
    income_split3 = annual_income - 1000000;
    income_tax3 = income_split3*(30.0/100.0);
    income_tax = income_tax1 + income_tax2 + income_tax3;
    surcharge = income_tax*(10.0/100.0);
    health_edu = (surcharge + income_tax)*(4.0/100.0);
    total_income_tax = income_tax + health_edu + surcharge;

printf("If the annual income of the person is Rs. %.2f , then\n", annual_income);
printf(" Total Income tax = Rs %.2f\n", income_tax);
printf(" Surcharge : Rs %.2f\n", surcharge);
printf("Health and Education Cess : Rs %.2f\n", health_edu);
printf("Total tax = %.2f", total_income_tax);

}else if(annual_income>10000000.0)
{
     income_split1 = 500000 - 250000;
    income_tax1 = income_split1*(5.0/100.0);
    income_split2 = 1000000 - 500000;
    income_tax2 = income_split2*(20.0/100.0);
    income_split3 = annual_income - 1000000;
    income_tax3 = income_split3*(30.0/100.0);
    income_tax = income_tax1 + income_tax2 + income_tax3;
    surcharge = income_tax*(15.0/100.0);
    health_edu = (surcharge + income_tax)*(4.0/100.0);
    total_income_tax = income_tax + health_edu + surcharge;

printf("If the annual income of the person is Rs. %.2f , then\n", annual_income);
printf(" Total Income tax = Rs %.2f\n", income_tax);
printf(" Surcharge : Rs %.2f\n", surcharge);
printf("Health and Education Cess : Rs %.2f\n", health_edu);
printf("Total tax = %.2f", total_income_tax);
   
}

return 0;
}
