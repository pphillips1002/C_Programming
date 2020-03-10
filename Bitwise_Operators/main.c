#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a & b;

    printf("a=60, b=13\nThe result of & is: %d\n",result);
    // compare each bit: 0000 1100 (12)

    result = a | b;
    printf("The result of | is: %d\n",result);
    // 0011 1101 (61)

    result = a ^ b;
    printf("The result of ^ is: %d\n",result);
    // 0011 0001 (49)

    result = ~a;
    printf("The result of ~a is: %d\n",result);
    // 1100 0011 (-61)

    result = a << 2;
    printf("The result of a << 2 is: %d\n",result);
    // 1111 00000 (240)

    return 0;
}
