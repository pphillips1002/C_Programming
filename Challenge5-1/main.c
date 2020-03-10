#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring variables
    double width = 12.03;
    double height = 12.08;
    double area = 0;
    double perimeter = 0;

    //calculations
    perimeter = 2.0 * (height+width);
    area = width * height;

    //print statements
    printf("The height is: %g\n", height);
    printf("The width is: %g\n", width);
    printf("Area is: %.2f\n", area);
    printf("Perimeter is: %.2f\n", perimeter);

    return 0;
}
