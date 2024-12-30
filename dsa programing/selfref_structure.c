#include<stdio.h>

struct code{

    int id;
    char name;
    struct code *ptr;
};

int main()
{
    struct code v1;

    v1.id=001;
    v1.name= 'kavy';
    v1.ptr=NULL;

    printf("code id is :%d\n",v1.id);
    printf("code name is :%c",v1.name);
    printf("code pointer id: %s",v1.ptr);

    return 0;
}
