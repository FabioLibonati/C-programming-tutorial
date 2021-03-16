#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 6;

    /*while(index <= 5){//As long as this condition is true keep executing the program, when this condition is false, stops it
        printf("%d\n", index);
        index++;
    }*/


    do{
        printf("%d\n", index);
        index++;

    }while(index <= 5);//Execute the program and afterwards check the condition
    return 0;
}
