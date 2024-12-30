#include<stdio.h>

int main ()
{
    int a = 0, b = 1;
    int i, next, n;

    printf("Enter the number of terms you want to print: ");
    scanf("%d", &n);
    printf("First %d terms are: ", n);

    for(i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
