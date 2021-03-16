#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);

    double gpa;
    printf("\nEnter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    char grade;
    printf("\nEnter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    char name[20];//It can store up to 20 characters
    printf("\nEnter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);*/

    char name [20];
    printf("\nEnter your name: ");
    fgets(name, 20, stdin);//Gets the whole line
    printf("Your name is %s", name);

    return 0;
}
