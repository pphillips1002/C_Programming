#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("HelloWorld!\n");

    //data types
    float pierce = 23.333;
    double pierce2 =55.55555555555555e+11;
    bool boolvarible = true;
    bool anoterBoolean = false;

    enum primaryColor { red, yellow, blue };
    enum primaryColor myColor, gregsColor;
    myColor = red;
    gregsColor = blue;

    enum gender {male, female};

    enum gender myGender;
    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender==anotherGender);

    char myChar = '\n'; //prints new line feed

    return 0;
}
