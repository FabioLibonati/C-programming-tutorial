#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks = 20;

    switch (marks){
    case 97:
    case 95:
    case 90:
    case 85:
        printf("Excellent");
        break;
    case 75:
    case 70:
        printf("Very good");
        break;
    case 60:
        printf("Good");
        break;
    case 40:
        printf("Ok");
        break;
    default:
        printf("Grade unavailable");
        break;
    }
    return 0;
}
