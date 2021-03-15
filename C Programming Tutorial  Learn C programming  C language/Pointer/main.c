#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val = 30;
    int *pointer_p;
    pointer_p = &val;

    printf("Address of val = %x\n", &val);///x = hexadecimal number and & before variable for print out the address of variable

    printf("value of pointer variable = %x\n", pointer_p);

    printf("value of pointer = %d\n", *pointer_p);

    return 0;
}
