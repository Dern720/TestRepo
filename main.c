#include <stdio.h>
#include <stdlib.h>
#include "newFunk.h"

int main()
{
    int * number1 = (int *)malloc(sizeof(int));
    int * number2 = (int *)malloc(sizeof(int));

    *number1 = 1;
    *number2 = 34;

    add(number1, number2);
    printf("Number 1 value after adding value 2 (%d) = %d\n", *number2, *number1);

    subt(number1, number2);
    printf("Number 1 value after subtracting value 2 (%d) = %d\n", *number2, *number1);


    int **arra = (int **)calloc(4,sizeof(int));

    for (int k = 0; k < 4; k++)
    {
        arra[k] = (int*)calloc(4, sizeof(int));
    }

    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", arra[i][j]);
        }
        printf("\n");
    }



    return 0;
}