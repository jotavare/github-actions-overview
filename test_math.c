#include <stdio.h>
#include "math.h"

int main()
{
    if (add(2, 3) != 5)
    {
        printf("Add function failed\n");
        return 1;
    }

    if (subtract(5, 3) != 2)
    {
        printf("Subtract function failed\n");
        return 1;
    }

    if (multiply(2, 3) != 6)
    {
        printf("Multiply function failed\n");
        return 1;
    }

    if (divide(6, 3) != 2.0)
    {
        printf("Divide function failed\n");
        return 1;
    }

    if (divide(1, 0) != 0)
    {
        printf("Divide by zero handling failed\n");
        return 1;
    }

    printf("All tests passed\n");
    return 0;
}