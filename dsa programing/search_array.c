#include <stdio.h>

int main()
{
    int arr[5] = {25, 15, 49, 36, 75};
    int item, i, j = 0;

    printf("givn array elements are: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
        
    }

    printf("enter the elements to be search: ");
    scanf("%d", &item);

    while (j < 5)
    {
        if (arr[j] == item)
        {
            break;
        }

        j = j + 1;
    }
    printf("element %d is found at %d position",item, j + 1);

    return 0;
}