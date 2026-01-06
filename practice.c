#include <stdio.h>
int insertion(int arr[], int n, int pos, int val);

int main()
{
    int pos, n, val, arr[50];
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of insertion: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &val);

    n = insertion(arr, n, pos, val);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int insertion(int arr[], int n, int pos, int val)
{
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    return n;
}