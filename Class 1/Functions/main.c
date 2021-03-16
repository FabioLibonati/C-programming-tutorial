#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Fabio", 29);// Calling a function
    sayHi("Rafael", 32);
    sayHi("Angela", 27);
    return 0;
}

void sayHi(char name[], int age){//This function does not return any information
    printf("Hello %s, you are %d\n", name, age);

}
