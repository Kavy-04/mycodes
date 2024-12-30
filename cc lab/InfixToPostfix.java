import java.util.Scanner;

public class InfixToPostfix {

    private static int MAX = 100;
    private static char[] stack = new char[MAX];
    private static int top = -1;

    private static boolean isStackEmpty() {
        return top == -1;
    }

    private static boolean isStackFull() {
        return top == MAX - 1;
    }

    private static void push(char value) {
        if (isStackFull()) {
            throw new RuntimeException("Stack overflow");
        }
        stack[++top] = value;
    }

    private static char pop() {
        if (isStackEmpty()) {
            throw new RuntimeException("Stack underflow");
        }
        return stack[top--];
    }

    private static char peek() {
        if (isStackEmpty()) {
            return '\0'; 
        }
        return stack[top];
    }

    private static int precedence(char op) {
        switch (op) {
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 2;
            case '^':
                return 3;
            default:
                return 0;
        }
    }

    private static boolean isOperator(char ch) {
        return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
    }

    public static String infixToPostfix(String infix) {
        StringBuilder postfix = new StringBuilder();

        for (int i = 0; i < infix.length(); i++) {
            char ch = infix.charAt(i);

            if (Character.isLetterOrDigit(ch)) {
                postfix.append(ch);
            } else if (ch == '(') {
                push(ch);
            } else if (ch == ')') {
                while (!isStackEmpty() && peek() != '(') {
                    postfix.append(pop());
                }
                if (!isStackEmpty() && peek() == '(') {
                    pop(); 
                }
            } else if (isOperator(ch)) {
                while (!isStackEmpty() && precedence(peek()) >= precedence(ch)) {
                    postfix.append(pop());
                }
                push(ch);
            }
        }

        while (!isStackEmpty()) {
            postfix.append(pop());
        }

        return postfix.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter an infix expression: ");
        String infix = scanner.nextLine();

        String postfix = infixToPostfix(infix);

        System.out.println("Postfix expression: " + postfix);
        scanner.close();
    }
}

// a b c d ^ * + e f / c + -

