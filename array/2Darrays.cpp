// M-1 NORMAL DECLARATION
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}}; // NORMAL ARRAY IN HEAP
    int *B[3];                                                // POINTER VARIABLE IN A STACK
    int **C;
    int i, j; // DOUBLE POINTERS

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    B[3] = new int[4];

    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    return 0;
}