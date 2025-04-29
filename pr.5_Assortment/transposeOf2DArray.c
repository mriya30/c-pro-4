#include <stdio.h>
int main()
{
    int row, col;
    printf("enter the size of row : ");
    scanf("%d", &row);

    printf("enter the size of column : ");
    scanf("%d", &col);

    int arr[row][col];
    printf("enter array's element : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nthe transpose matix is : \n");
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}