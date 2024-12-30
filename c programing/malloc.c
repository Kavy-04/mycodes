#include <stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n,i;
    // int null;

    printf("enter the number of element \n");
    scanf("%d",&n);
    printf("given number is %d\n",n);

    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("the allocation memory is failed");
        return 1;
    }
    else
    {
        printf("the memory allocation is successfully done \n");

        for(i=0; i<n; i++)
        {
            ptr[i]= i+1;
        }

        for(i=0; i<n; i++)
        {
            printf("%d\t",ptr[i]);
        }
    }
    return 0;
}

