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

    int numOfRow;
    printf("\nEnter row number : ");
    scanf("%d", &numOfRow);
    int sumOfRow = 0;
    printf("Elements of row %d : ", numOfRow);
    for (int j = 0; j < col; j++)
    {
        printf("%d ", arr[numOfRow][j]);
        sumOfRow += arr[numOfRow][j];
    }
    printf("\nThe sum of row %d : %d\n", numOfRow, sumOfRow);

    int numOfCol;
    printf("\nEnter column number : ");
    scanf("%d", &numOfCol);
    int sumOfCol = 0;
    printf("Elements of column %d : ", numOfCol);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr[i][numOfCol]);
        sumOfCol += arr[i][numOfCol];
    }
    printf("\nThe sum of column %d : %d\n", numOfCol, sumOfCol);
}
