#include <stdio.h>

int MAX = 8;
int stack[8];
int top = -1;
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
int isEmpty()
{
    if (top == -1)
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
    }
    else
    {
        printf("stack is full");
    }
}

int pop()
{
    if (!isEmpty())
    {
        int data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("stack is empty");
    }
}
int peek()
{
    return stack[top];
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

    printf("stack elements is :\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d", stack[i]);
        printf("\n");
    }

    printf("the topmost element is: %d", peek());
    while (!isEmpty())
    {
        int data = pop();
        printf("%d\n",data);
    }
    printf("stack is full%s\n", isFull() ? "true" : "false");
    printf("stack is empty:%s\n", isEmpty() ? "true" : "false");

    return 0;
}
