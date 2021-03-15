#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///The Ternary (conditional) operator in C
    int a=19, b=20;
    int c;
    ///( Logical expression goes here ) ? ( if non-zero (true)  ) : ( if 0 (false) )
    c = (a>b) ? a : b;
    printf("Number: %d", c);

    return 0;
}
