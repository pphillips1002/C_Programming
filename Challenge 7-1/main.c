#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring variables
    double hoursWorked;
    float grossPay;
    float netPay;
    float taxes;

    //takes hours worked as input
    printf("Enter number of hours worked: ");
    scanf("%lf",&hoursWorked);
     //calculates gross pay
     if (hoursWorked <= 40) {
        grossPay = 12.00*hoursWorked;
     }
     else {
        double overtimePay = 18.00*(hoursWorked-40);
        grossPay = 480+overtimePay;
     }
     //calculates taxes
     if (grossPay <= 300) {
        taxes = grossPay*.15;
     }
     else if (grossPay <= 450) {
        taxes = 45+(grossPay-300)*.2;
     }
     else {
        taxes = 75+(grossPay-450)*.25;
     }

     netPay = grossPay - taxes;

     //prints calculation
     printf("\nYour gross pay is: $%.2f\n",grossPay);
     printf("Your taxes are: $%.2f\n",taxes);
     printf("Your net pay is: $%.2f\n",netPay);





}
