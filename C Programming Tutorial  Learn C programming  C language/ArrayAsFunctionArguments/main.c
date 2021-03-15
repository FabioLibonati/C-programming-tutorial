#include <stdio.h>
#include <stdlib.h>

int ArraySum(int MyArray[], int size)
{
    int sum = 0;

    for(int i = 0; i < size;i++)
    {
        sum += MyArray[i];
    }
    return sum;

}

int main()
{
    int MyNumberArray[6] = {20,30,60,50,55,30};

    int sum_of_array = ArraySum(MyNumberArray, 6);

    printf("Sum = %d", sum_of_array);
    return 0;
}
