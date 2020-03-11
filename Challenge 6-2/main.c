#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring data types
    int a = 0;
    char b = 'A';
    long c = 0;
    long long d = 0;
    double e = 0.0;
    long double f = 0.0;

    //calculating size of data types
    int g = sizeof a;
    int h = sizeof b;
    int i = sizeof c;
    int j = sizeof d;
    int k = sizeof e;
    int l = sizeof f;

    //printing size of data types
    printf("The size of int is: %d\n",g);
    printf("The size of char is: %d\n",h);
    printf("The size of long is: %d\n",i);
    printf("The size of long long is: %d\n",j);
    printf("The size of double is: %d\n",k);
    printf("The size of long double is: %d",l);

    return 0;
}
