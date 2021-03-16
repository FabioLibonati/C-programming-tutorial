#include <stdio.h>
#include <stdlib.h>

int ReturnFibonacci(int num)
{

    int first, second=1;

    if(num > 0){
        printf("The numbers are: 0,");

        for(int i = 1;i < num;i++){
            if(i == 1)
                printf("%d, ", second);
            else{
                second += first;
                first = second - first;
                printf("%d, ", second);
            }
        }
    }
}


int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    ReturnFibonacci(num);

    return 0;
}
