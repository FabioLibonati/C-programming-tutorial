#include <stdio.h>
#include <stdlib.h>

void PrimeNumbersRange (int a, int b)
{
    int count = 0;
    printf("The prime numbers between %d and %d are ", a, b);

    for(int i = a +1;i < b;i++)
    {
        for(int j = 1;j <= i;j++){
            if((i % j) == 0)
                count++;
            if((count == 2) && (i == j) || (i == 1))
               printf("%d, ", i);
        }
        count = 0;
    }
}

int main()
{
    int a,b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    PrimeNumbersRange(a, b);

    return 0;
}
