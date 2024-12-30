// insertion opration in c programing

#include<stdio.h>

int main()
{
    int arr[20]= {15,26,85,32,45};

    int i,n=5;
    int x,pos;

    printf("array elements before insertion :\n");

    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
        printf("\n");

    }
    x =50;
    pos = 4;
    n++;



    for(i=n-1; i>= pos; i--)
    {
        arr[i]=arr[i-1];
        //arr[pos-1]=x;
    }
    arr[pos-1]=x;
    printf("afray element after ibnsertion :");

    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
