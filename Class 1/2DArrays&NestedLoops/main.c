#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                    };

    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){//When you use the array, you start with the number 0, unlike when you first tell him how many elements he will have.

            if(j == 0){
                printf("%d,", nums[i][j]);
            }else{
                printf("%d", nums[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
