#include <stdio.h>
#include <stdlib.h>

///Purpose: To read a number from user and print factors of the number
int main()
{
    int i, num;

    printf("Enter a number to show its factors: ");
    scanf("%d", &num);

    printf("\nThe factors of %d are 1", num);

    for(i = 2; i <= num; i++)
    {
        if((num % i) == 0)
            printf(", %d", i);
    }

    return 0;
}
