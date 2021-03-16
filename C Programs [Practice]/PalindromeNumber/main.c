#include <stdio.h>
#include <stdlib.h>


int PalindromeNumber(int getNum){
    int getNum2, getMod, result = 0, mult = 1, count;

    getNum2 = getNum;

    while(getNum2 > 0){
        getMod = getNum2 % 10;
        getNum2 = getNum2 / 10;
        mult = mult * 10;
    }

    getNum2 = getNum;

    while(getNum2 > 0){
        getMod = getNum2 % 10;
        getNum2 = getNum2 / 10;
        mult = mult / 10;
        result += (mult * getMod);
    }

    return result;

}


int main()
{
    int num, retNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    retNum = PalindromeNumber(num);

    if(num == retNum)
        printf("%d is a Palindrome number", num);
    else
        printf("%d is not a Palindrome number", num);

    return 0;
}
