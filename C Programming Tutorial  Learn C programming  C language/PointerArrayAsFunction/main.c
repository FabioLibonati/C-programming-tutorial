#include <stdio.h>
#include <stdlib.h>

int getSum(int *point_Array, int size)
{

    int sum = 0;

    for(int i = 0;i < size;i++)
    {
        sum += point_Array[i];
    }

    return sum;

}

int main()
{
    int my_array[4] = {10, 20, 30, 40};

    int mySum = getSum(my_array, 4);

    printf("The value of my sum is = %d", mySum);
}
