#include <stdio.h>
int main()
{
    int size;
    printf("enter array size : ");
    scanf("%d", &size);

    int arr[size];
    printf("enter array elements : \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nNegative Elements From an Array : ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
}