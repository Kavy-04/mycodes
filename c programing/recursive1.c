#include<stdio.h>

int factorial(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
int main()
{
    int num;
    printf("enter the number  you want the factorial of \n");
    scanf("%d",&num);

    printf("the factorial of number is %d and the answer is %d  ",num,factorial(num));

    return 0;
}
