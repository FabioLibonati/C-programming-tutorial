#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer = fopen("employees.txt", "r");// r = read, w = write, a = append

    fprintf(fPointer, "Jam, Salesman\nPam, Receptionist\nOscar, Accounting");
    fprintf(fPointer, "\nKelly, Customer Service");


    fclose(fPointer);
    return 0;
}
