#include <stdio.h>
#include <stdlib.h>

int main()
{
     float grade;
     char letterGrade;

     printf("Enter your numeric grade to one decimal point: ");
     //enter grade
     scanf("%f",&grade);
     //determines letter grade
     if (grade > 89.5) {
     letterGrade = 'A';
     }
     else if (grade > 79.5) {
     letterGrade = 'B';
     }
     else if (grade > 69.5) {
     letterGrade = 'C';
     }
     else if (grade > 59.5) {
     letterGrade = 'D';
     }
     else {
     letterGrade = 'F';
     }
     //prints number and letter grade
     printf("\nFor %.1f the letter grade is: %c",grade,letterGrade);

     return 0;
}
