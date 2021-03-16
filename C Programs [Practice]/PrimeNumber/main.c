#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    for(int i = 1;i <= num;i++)
    {
        if(((num % i) == 0) && (i != 1) && (i != num)){
            printf("%d is not a prime number", num);
            break;
        }
        else if(i == num)
            printf("%d is a prime number", num);
    }

    return 0;
}
