#include <stdio.h>
int main()
{
    int row, col;
    printf("enter the size of row : ");
    scanf("%d", &row);

    printf("enter the size of column : ");
    scanf("%d", &col);

    int arr[row][col];
    printf("enter array elements : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("The largest element is : %d\n", max);
}