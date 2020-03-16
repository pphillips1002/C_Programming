#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 1;

    while (count <= 5) {
        printf("%d\n",count);
        ++count;
    }

    do { //always executes once
        printf("%d\n",count);
        ++count;
    } while (count <=5);
}
