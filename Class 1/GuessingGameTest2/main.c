#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int attempt = 3;

    while(guess != secretNumber){
        printf("Enter a number: ");
        scanf("%d", &guess);
        attempt--;

        if(attempt < 0 && guess != secretNumber){
            printf("You lose\nGame over");
            guess = secretNumber;
        }else if(secretNumber == guess){
            printf("Congratulations!");
        }else{
            printf("Try again, you have %d attempts left\n", attempt);
        }
    }

    return 0;
}
