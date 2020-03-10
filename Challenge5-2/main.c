#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company Company1 = GOOGLE;
    enum Company Company2 = FACEBOOK;
    enum Company Company3 = XEROX;

    printf("The companies values are: \nGoogle: %d\nFacebook: %d\nXerox: %d\n",Company1,Company2,Company3);

    return 0;

}
