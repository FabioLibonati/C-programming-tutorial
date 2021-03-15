#include <stdio.h>
#include <stdlib.h>

void getValue(int *my_pointer)
{
    *my_pointer = 10000; /// get_value_value = 10000

    return;
}

int main()
{
    int get_the_value;

    getValue(&get_the_value);

    printf("The value of get_the_value = %d", get_the_value);

    return 0;
}
