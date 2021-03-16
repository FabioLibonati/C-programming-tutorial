#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, total, size;

    printf("Enter the number to multiply: ");
    scanf("%d", &number);

    printf("\nEnter the value to the multiplication table: ");
    scanf("%d", &size);

    system("cls");
    printf("\t\tMultiplication Table\n");
    for(int i = 0;i <= size;i++)
    {
        total = number * i;
        printf("\t\t%d x %d = %d\n", number, i, total);
    }


    return 0;
}
