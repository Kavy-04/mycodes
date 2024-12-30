#include<stdio.h>

int main()
{
    int a=33;
    int* ptr=&a;
    printf("the address of pointer to a is %p\n",&ptr);
    printf("the address of a is %d\n",&a);
    printf("the value of pointer is %d\n",*ptr);
    printf("the value of a is %d",a);

    return 0;

}
