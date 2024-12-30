#include <stdio.h>

int MAX = 8;

int top = -1;
int stack[8];

int isFull()
{
    if (top == MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        stack[top] = data;
    }else
    {
        printf("stack is full\n");
    }
    return 0;
}


int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);

    printf("stack elements is :\n");

    for (int i = 0; i < 9; i++)

    {
        printf("%d\n", stack[i]);
    }
    return 0;
}
