#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MyNumberArray[2][3] = {
    {1,3,2},///row 0
    {5,6,8}///row 1
    };

    for(int i = 0;i < 2; i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("MyNumberArray[%d][%d] = %d\n",i+1, j+1, MyNumberArray[i][j]);
        }

    }

    return 0;
}
