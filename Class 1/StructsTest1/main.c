#include <stdio.h>
#include <stdlib.h>

struct Animals{
    int age;
    char colorFur[20];
    char food[20];

};

int main()
{
    struct Animals bear;
    bear.age = 7;
    strcpy (bear.colorFur, "brown");
    strcpy (bear.food, "fish");

    printf("         Bear\n");
    printf("Age: %d  Color: %s  Food: %s\n\n", bear.age, bear.colorFur, bear.food);

    struct Animals goat;

    goat.age = 9;
    strcpy (goat.colorFur, "white");
    strcpy (goat.food, "grass");

    printf("         Goat\n");
    printf("Age: %d  Color: %s  Food: %s\n\n", goat.age, goat.colorFur, goat.food);

    struct Animals panther;

    panther.age = 4;
    strcpy (panther.colorFur, "black");
    strcpy (panther.food, "meat");

    printf("         Panther\n");
    printf("Age: %d  Color: %s  Food: %s\n\n", panther.age, panther.colorFur, panther.food);


    return 0;
}
