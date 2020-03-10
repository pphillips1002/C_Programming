#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //general
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    //precision
    float x = 3.993233222323;

    printf("This float is: %.2f", x);

    //padding

    return 0;
}
