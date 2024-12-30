#include<stdio.h>
void printAddnum()
{
    int a,b;
    printf("enter num is a ");
    scanf("%d",&a);
    printf("enter num is b");
    scanf("%d",&b);

    int sum=a+b;
    printf("the sum is %d",sum);
}
int main()
{
    printAddnum();

    return 0;
}
