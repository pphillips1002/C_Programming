#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    double days = 0;

    printf("Enter Number of Minutes: ");
    scanf("%d",&minutes); //user input minutes
    printf("You entered %d",minutes);
    printf(" minutes\n");

    double dayCalc = (minutes/1440.0); //minutes in day
    printf("In days: %g\n",dayCalc);
    double yearCalc = (minutes/525600.0); //minutes in year
    printf("In years: %g\n",yearCalc);

    return 0;
}
