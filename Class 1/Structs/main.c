#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy (student1.name, "Fabio");//You have to use the string copy function when working with an array
    strcpy (student1.major, "Business");

        struct Student student2;
    student2.age = 20;
    student2.gpa = 2.7;
    strcpy (student2.name, "John");
    strcpy (student2.major, "Art");

    printf("%s", student2.name);

    return 0;
}
