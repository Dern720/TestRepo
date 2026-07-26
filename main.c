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

    return 0;
}