Q4 Define a structure named ‘State’ which contains four fields name,
population, lit_rate, income. Declare a structure variable as
st1.Assign the values for your structure members as
Maharashtra,1000000,5.8,6000.00 respectively.

#include<stdio.h>
#include<stdlib.h>
struct State{
char name[20];
long population;
float lit_rate;
float income
}st1;
int main()
{
    strcpy(st1.name,"Maharashtra");
    st1.population=1000000;
    st1.lit_rate=5.8;
    st1.income=6000.00;

    printf("State Name : %s \n",st1.name);
    printf("population : %ld \n",st1.population);
    printf("literacy Rate : %f\n",st1.lit_rate);
printf("Income : %f \n",st1.income);
return 0;
}