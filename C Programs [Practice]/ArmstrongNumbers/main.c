#include <stdio.h>
#include <stdlib.h>

int TestNumber(int div){
    int num, input, sum = 0;
    input = div;

    while(div > 0){
        num = div % 10;
        sum += num*num*num;
        div = div / 10;
    }

    if(sum == input)
        return 0;
    else
        return 1;

}

int main()
{
    int input, value;

    printf("Enter a number: ");
    scanf("%d", &input);

    value = TestNumber(input);

    switch (value){
        case 0:
            printf("%d is an Armstrong Number", input);
            break;
        case 1:
            printf("%d is not an Armstrong Number", input);
            break;
    }

    getch();

    return 0;
}
