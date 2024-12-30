#include <stdio.h>
int main()
{
    int arr[] = {18, 30, 15, 70, 12};
    int n = 5;

    int i;

    printf("given araay elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        printf("\n");
    }

    // j = k;

    // while (j < n)
    // {
    //     arr[j - 1] = arr[j];
    //     j = j + 1;
    // }

    n = n - 1;

    printf("elements of the array after deletion\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        printf("\n");
    }

    return 0;
}