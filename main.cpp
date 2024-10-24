#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows, cols, i, j;


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of cols: ");
    scanf("%d", &cols);

    int **p = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
    {
       // p[i] = (int *)malloc(cols * sizeof(int));
        *(p+i)=(int *)malloc(cols * sizeof(int));
        printf("%p\n",p[i]);
    }


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter the element of p[%d][%d]: ", i, j);
            scanf("%d", &p[i][j]);
            printf("%p\n",&p[i][j]);
        }
        printf("\n");
    }



    free(p);

    return 0;
}
