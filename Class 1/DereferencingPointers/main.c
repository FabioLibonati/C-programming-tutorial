#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;

    printf("%d\n%d", *pAge, *&age);//This is going to show whatever is stored inside of the variable

    return 0;
}
