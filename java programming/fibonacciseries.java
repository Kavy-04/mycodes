
// public static int  class recursivefibonacci(int n) {
//        if(n<=1){
//         return n;
//        }
//        return recursivefibonacci(n-1)+recursivefibonacci(n-2);
// }
// public static int nonrecursivefibonacci(int n)
// {
//     if(n<=1){
//         return n;
//        }

//     int i;
//     int fib=0;
//     int f=1;
//     int s=1;
//     int temp;
//     System.out.println("fibonacci series");

//     for(i=1;i<n;i++)
//     {
//         fib=f+s;
//         f=s;
//         s=fib;
//     }

//     return fib;
// }

import java.util.Scanner;

public class fibonacciseries {

    public static int recursiveFibonacci(int n) {
        if (n <= 1) {
            return n;
        }
        return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
    }

    public static int nonRecursiveFibonacci(int n) {
        if (n <= 1) {
            return n;
        }

        int i;
        int fib = 0;
        int f = 1;
        int s = 1;
        // System.out.println("fibonacci series");

        for (i = 2; i < n; i++) {
            fib = f + s;
            f = s;
            s = fib;
        }

        return fib;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        scanner.close();


        System.out.println("enter the element of n");
        int n = scanner.nextInt();

        if (n <= 0) {
            System.out.println("please enter positive integer");
            return;
        }

        int recursivefibonacciResult = recursiveFibonacci(n);
        int nonrecursivefibonacciResult = nonRecursiveFibonacci(n);

        System.out.println("\nusing recursive fib:");
        System.out.println("fibbonacciseries(" + n + " )=" + recursivefibonacciResult);
        System.out.println("\nusing nonrecursive fib:");
        System.out.println("fibbonacciseries(" + n + ")=" + nonrecursivefibonacciResult);

    }
}
