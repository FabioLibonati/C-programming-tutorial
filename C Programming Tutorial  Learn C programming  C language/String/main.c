#include <stdio.h>
#include <stdlib.h>
//#include <string.h> /// Use to do other thing with string

int main()
{
    char string1[12] = "Hello";
    char string2[12] = " world";
    char string3[12];

    strcpy(string3,string1); /// strcpy(dest, source)
    strcat(string1, string2); /// add string 2 to string 1
    int length_string1 = strlen(string1); /// length of the string

    printf("strcpy = %s", string3);
    printf("\nstrcat = %s", string1);
    printf("\nstrlen = %d", length_string1);

    int value = strcmp(string3, string1);

    printf("\nvalue = %d", value);
    return 0;
}
