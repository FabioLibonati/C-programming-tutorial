#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*FILE * fPointer = fopen("employees.txt", "w");// r = read, w = write, a = append

    fprintf(fPointer, "Jam, Salesman\nPam, Receptionist\nOscar, Accounting");
    fprintf(fPointer, "\nKelly, Customer Service");*/

    char line[255];
    int * fPointer = fopen("employees.txt", "r");

    fgets(line, 255, fPointer);//Store inside of the variable line
    printf("%s", line);

    fclose(fPointer);

    return 0;
}
