#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MyNumberArray [6] = {20,30,60,50,55,30};
    int i;
    /*int AccessArray = MyNumberArray[1];
    printf("Value: %d\n", AccessArray);
    char CharArray [4] = {'a','b','c','d'};*/

    MyNumberArray[1]=45;

    for(i = 0; i < 6;i++)
    {
        printf("Element [%d] = %d\n", i+1, MyNumberArray[i]);
    }



    return 0;
}
