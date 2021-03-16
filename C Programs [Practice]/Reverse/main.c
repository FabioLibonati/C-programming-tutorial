#include <stdio.h>
#include <stdlib.h>

int reverse, test, result, count = 0, reccount, store;

int ValueCount(store){
    int store2;

    store2 = store;

    for(int i = 0;i <= store;i++){
        test = store2 % 10;
        store2 = store2 / 10;

        if(count == 0)
            count = 1;
        else
            count = count * 10;

        if(store2 == 0)
            break;
    }
    return count;
}

int ValueResult(count, store){
    reccount = count;

    for(int j = 0;j <= count;j++){
        reverse = (store % 10) * reccount;
        store = store / 10;
        result += reverse;
        reccount = reccount / 10;

        if(store == 0)
            break;
    }
    return result;

}

int main()
{
    int num, retCount, retResult;

    printf("Enter a number: ");
    scanf("%d", &num);

    retCount = ValueCount(num);

    retResult = ValueResult(retCount, num);

    printf("Reverse of the number %d is %d", num, retResult);

    getch();

    return 0;
}
