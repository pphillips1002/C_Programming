#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a = 33;
    int b = 15;
    int c = 0;

    //binary operators (two operands)
    c = a - b;//subtract
    c = a * b;//multiply
    c = a/b; //divide
    c = a % b; //modulo

    c = a + b;//add
    printf("c is %d\n", c);

    //unary operators (one operand)
    a++; //increment a after line
    ++a; //increment a before line
    --a; //decrement a before line
    a--; //decrement a after line

    -a; //negate a
    printf("negative a is: %d\n",-a);

    +b; //positive b

    //logical operators
    int f = 0;
    bool d = true; //true (1)
    bool e = 0; //false (0)
    d && e; //d and e, false
    d || e; //d or e, true

    f = !(d && e); // d nand e, true, shown below
    printf("f is: %d",f);
    printf(" (or true)\n");


    //assignment operators
    a = b; // simple assignment
    a += b; // (a = a + b)
    a -= b; // (a
    a *= b; // (a = a * b)


    return 0;
}
