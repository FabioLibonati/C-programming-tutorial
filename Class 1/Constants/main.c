#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num = 5;//You can't modify this variable with the const keyword
    printf("%d\n", num);

    printf("%d", 70);//That's also a constant because you can't change

    return 0;
}
