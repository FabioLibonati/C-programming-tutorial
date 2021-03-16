#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, swap;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    swap = a;
    a = b;
    b = swap;

    printf("\nNumber a is %d", a);
    printf("\nNumber b is %d", b);

    return 0;
}
