#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, n, d, result = 0;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Armstrong Numbers: ");
    for(int i = a;i <= b;i++){
        d = i;
        for(int j = 0;j <= b;j++){
            n = d % 10;
            d = d / 10;
            result += n*n*n;

            if(d == 0)
                break;
        }
        if(result == i)
            printf("%d ", result);

        result = 0;
    }

    return 0;
}
