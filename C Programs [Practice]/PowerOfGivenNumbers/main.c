#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, result = 1;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    /*for(int i = 0;i < num2;i++)
        result = result * num1;

    printf("\nThe result of %d raised to the power of power %d is %d", num1, num2, result);*/


    ///Using a function to calculate the factor
    printf("\nThe result of %d raised to the power of power %d is %d", num1, num2, result = pow(num1, num2));

    return 0;
}
