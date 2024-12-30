
typedef struct {
 int top;
 int capacity;
 int *array;
} Stack;

// Function to create a new stack
Stack* createStack() {
    int INITIAL_CAPACITY;
 Stack* stack = (Stack*)malloc(sizeof(Stack));
 stack->top = -1;
 stack->capacity = INITIAL_CAPACITY;
 stack->array = (int*)malloc(stack->capacity * sizeof(int));
 return stack;
}
// Function to check if the stack is empty
int isEmpty(Stack* stack) {
 return stack->top == -1;
}
// Function to push an element onto the stack
void push(Stack* stack, int item) {
 if (stack->top == stack->capacity - 1) {
 // Double the capacity if the stack is full
 stack->capacity *= 2;
 stack->array = (int*)realloc(stack->array, stack->capacity * sizeof(int));

}
 stack->top++;
 stack->array[stack->top] = item;
}
// Function to pop an element from the stack
int pop(Stack* stack) {
 if (isEmpty(stack)) {
 printf("Stack Underflow\n");
 exit(1);
 }
 int item = stack->array[stack->top];
 stack->top--;
 return item;
}
int main() {
 Stack* stack = createStack();
 push(stack, 10);
 push(stack, 20);
push(stack, 30);
 printf("%d popped from stack\n", pop(stack));
 printf("%d popped from stack\n", pop(stack));
 return 0;
}
