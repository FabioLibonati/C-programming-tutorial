#include <stdio.h>
#include <stdlib.h>

int FactorialFunction(int num)
{
    int result = 1;

    for(int i = 1;i <= num;i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int number, Print_Result;
    int number2, Print_Result2;

    printf("Enter the first number: ");
    scanf("%d", &number);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    Print_Result = FactorialFunction(number);
    Print_Result2 = FactorialFunction(number2);

    printf("\n\nThe first factorial number of %d is %d", number, Print_Result);
    printf("\nThe second factorial number of %d is %d\n", number2, Print_Result2);

    return 0;
}
