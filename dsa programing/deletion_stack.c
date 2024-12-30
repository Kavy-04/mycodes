#include <stdio.h>

int MAX = 8;
int stack[8];
int top = -1;

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
        printf("stack is empty\n");
    }
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

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",stack[i]);
    }

    while (!isEmpty())
    {
        int data= pop();
        printf("%d\n",data);
    }

    return 0;


}
// #include <stdio.h>

// int MAX = 8;
// int stack[8];
// int top = -1;

// int isEmpty()
// {
//     return top == -1;
// }

// int isFull()
// {
//     return top == MAX - 1;
// }

// void push(int data)
// {
//     if (!isFull())
//     {
//         top = top + 1;
//         stack[top] = data;
//     }
//     else
//     {
//         printf("Stack is full\n");
//     }
// }

// int pop()
// {
//     if (!isEmpty())
//     {
//         int data = stack[top];
//         top = top - 1;
//         return data;
//     }
//     else
//     {
//         printf("Stack is empty\n");
//         return -1; // Return -1 if stack is empty
//     }
// }

// int main()
// {
//     push(10);
//     push(20);
//     push(30);
//     push(40);
//     push(50);
//     push(60);
//     push(70);
//     push(80);

//     for (int i = 0; i <= top; i++)  // Print only filled slots
//     {
//         printf("%d ", stack[i]);
//     }
//     printf("\n");

//     while (!isEmpty())
//     {
//         int data = pop();
//         printf("%d ", data);
//     }

//     return 0;
// }
