#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool PrimeNumber(int num);

int main()
{
    int input;

    printf("Enter any number: ");
    scanf("%d", &input);

    PrimeNumber(input);

    if(PrimeNumber(input))
        printf("%d is a prime number", input);
    else
        printf("%d is not a prime number", input);


    return 0;
}

bool PrimeNumber(int num){
    int i;
        for(i = 2;i <= num;i++)
    {
        if((num % i) == 0)
            break;
    }

    if(num == i)
        return true;
    else
        return false;

}
