#include <stdio.h>
#include <stdlib.h>


int main()
{

    int num = 0;
    int luckyNum=11;
    int numUser;

    do{
        luckyNum = rand() % 10;//random number between 0 and 10
        printf("Enter a number: ");
        scanf("%d", &numUser);

        if(numUser == luckyNum){
            printf("\nCongratulations");
            printf("\nThe number is %d", luckyNum);
            num++;
        }else{
            printf("Sorry, try again\n");
            printf("The number is %d\n", luckyNum);
            num = 0;
            luckyNum = 11;
        }
    }while(num == 0);

    return 0;
}
