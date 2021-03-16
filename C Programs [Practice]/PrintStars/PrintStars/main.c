#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 0;i < num;i++){
        for(j = 0;j <= i;j++)
            printf("*");

        j=0;
        printf("\n");
    }

    return 0;
}
