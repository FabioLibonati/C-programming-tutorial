#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val_array[3] = {30, 40, 50};
    int *pointer_array[3];

    for(int i = 0;i < 3;i++)
    {
       pointer_array[i] = &val_array[i];///assign the address of array elements

       printf("address of val_array[%d] = %x\n", i, pointer_array[i]);

       printf("Value of val_array[%d] = %d\n", i, *pointer_array[i]);
    }



    return 0;
}
