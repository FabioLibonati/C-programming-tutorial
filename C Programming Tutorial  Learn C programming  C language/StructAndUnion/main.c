#include <stdio.h>
#include <stdlib.h>

struct mystruct {
    int myInt;
    char myChar;
} record;

union myUnion{
    int myInt;
    char myChar
}uni;

int main()
{
    record.myInt = 2;
    record.myChar = 'b';

    uni.myInt = 3;
    uni.myChar = 7;

    printf("Struct = %d %c",record.myInt, record.myChar);
    printf("\nUni = %d %d",uni.myInt, uni.myChar);

    return 0;
}
