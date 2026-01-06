#include <stdio.h>
int deletion(int arr[], int n, int pos);

int main()
{
    int pos, n, arr[50];
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of deletion: ");
    scanf("%d", &pos);

    n = deletion(arr, n, pos);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int deletion(int arr[], int n, int pos)
{
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    return n;
}