#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 1;i <= number;i++)
    {
        result += i;
    }

    printf("\nSum of %d natural number is %d", number, result);

    return 0;
}
