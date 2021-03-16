#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = number;

    for(int i = result; i > 1;i--)
    {
        result *= (i-1);
    }

    printf("\nThe factorial of the number %d is %d", number, result);
    return 0;
}
