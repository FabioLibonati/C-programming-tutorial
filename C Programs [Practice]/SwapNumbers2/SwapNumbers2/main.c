#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    b = a + b;
    a = b - a;
    b = b - a;

    printf("\nNumber a is %d", a);
    printf("\nNumber b is %d", b);


    return 0;
}
