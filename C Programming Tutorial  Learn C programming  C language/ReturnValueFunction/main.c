#include <stdio.h>
#include <stdlib.h>

int product (int a, int b){
    return(a * b);
}

int main()
{
    int x, y, prod;
    printf("Enter two numbers\n");
    printf("Number 1: ");
    scanf("%d", &x);
    printf("Number 2: ");
    scanf("%d", &y);
    prod = product(x, y);

    printf("The product is %d", prod);
    return 0;
}
