#include <stdio.h>
#include <stdlib.h>
void transpose(int **arr)
{
    int **arrt, i, j;
    arrt = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 3; i++)
    {
        arrt[i] = (int *)malloc(3 * sizeof(int));
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           arrt[i][j]=arr[j][i];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", arrt[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        free(arrt[i]);
    }
}
int main()
{
    int r = 3, c = 3, i, j, count;

    int **arr1;
    arr1 = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
        arr1[i] = (int *)malloc(c * sizeof(int));

    printf("enter arr1");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("%d\n", *(*(arr1 + 1) + 1));

    transpose(arr1);
    return 0;
}
