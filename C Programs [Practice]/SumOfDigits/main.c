#include <stdio.h>
#include <stdlib.h>

int Calculate(int GetNum){
    int store, rest, sum = 0;

    store = GetNum;

    for(int i = 0;i <= GetNum; i++){
        rest = store % 10;
        sum += rest;
        store = store / 10;

        if(store == 0)
            return sum;
    }
}

int main()
{
    int num, result;

    printf("Enter any number: ");
    scanf("%d", &num);

    result = Calculate(num);

    printf("Sum of the digits of %d is %d", num, result);

    getch();

    return 0;
}
