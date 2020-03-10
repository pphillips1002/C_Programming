#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 22.22;
    float b = 44.44;
    int c = (int) a + (int) b;
    printf("%d\n",c); //66, decimals drop

    int d = sizeof d;
    printf("%d",d); //4 bytes

}
