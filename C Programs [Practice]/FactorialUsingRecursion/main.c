#include <stdio.h>
#include <stdlib.h>

int Factorial(int input);

int main()
{
    //Variable declaration
    int n;

    //Read data from user
    printf("Enter any number:");
    scanf("%d", &n);

    //print the result
    printf("Factorial of %d is %d", n, Factorial(n));

    return 0;
}

int Factorial(int input)
{
    if(input == 0)
        return 1;
    else
        return input*Factorial(input-1);
}
