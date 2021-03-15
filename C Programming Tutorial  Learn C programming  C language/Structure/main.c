#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[20];
    float percentage;
} record; /// You can declare the variable record in the structure instead of the main function

int main()
{

    record.id = 27653;
    strcpy(record.name, "Fabio"); /// You have to use this function to copy the string to an array
    record.percentage = 70.2;

    printf("id = %d   name = %s   percent = %.2f", record.id, record.name, record.percentage);


    record.id = 53245;
    strcpy(record.name, "Mark"); /// You have to use this function to copy the string to an array
    record.percentage = 83.20;

    printf("\nid = %d   name = %s   percent = %.2f", record.id, record.name, record.percentage);

    return 0;
}
