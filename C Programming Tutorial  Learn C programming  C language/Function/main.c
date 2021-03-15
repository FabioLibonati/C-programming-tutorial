#include <stdio.h>
#include <stdlib.h>

void Sum(int a, int b){
    int sum;
    sum = a+b;
    printf("\nThe sum is %d", sum);
}

int main()
{
    int x,y, result;
    printf("Please enter two numbers\n");
    printf("Number 1: ");
    scanf("%d", &x);
    printf("\nNumber 2: ");
    scanf("%d", &y);

    Sum(x, y);
    return 0;
}
