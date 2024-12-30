#include <stdio.h>

int main()
{
    int a=67;
    int *ptr=&a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",ptr-2);
    printf("%d\n",a);


    return 0;
}
