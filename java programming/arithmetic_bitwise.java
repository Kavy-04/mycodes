class ArithmeticOpretion {
    public int add(int a, int b) {
        return a + b;
    }

    public int subtract(int a, int b) {
        return a - b;
    }

    public int multiply(int a, int b) {
        return a * b;
    }

    public int division(int a, int b) {
        return a / b;
    }
}

class BitwiseOpretion {
    public int or(int x, int y) {
        return x | y;
    }

    public int and(int x, int y) {
        return x & y;
    }

    public int xor(int x, int y) {
        return x ^ y;
    }

    public int leftshift(int x, int y) {
        return x << y;
    }

    public int rightshift(int x, int y) {
        return x >> y;
    }
}

public class arithmetic_bitwise {
    public static void main(String[] args) {
        System.out.println("kavy muni");

        int a=10;
        int b=20;

        ArithmeticOpretion arith= new ArithmeticOpretion();
        BitwiseOpretion bit= new BitwiseOpretion();

        int x=16;
        int y=2;

        int addition= arith.add(a, b);
        int sub=arith.subtract(a, b);
        int multy= arith.multiply(a, b);
        double div= arith.division(a, b);

        int bitwiseor= bit.or(x, y);
        int bitwiseand= bit.and(x, y);
        int bitwisexor=bit.xor(x, y);
        int bitwisels=bit.leftshift(x, y);
        int bitwisers= bit.rightshift(x, y);

        System.out.println("addition "+addition);
        System.out.println("subtractor"+sub);
        System.out.println("multyplication"+multy);
        System.out.println("division "+div);


        System.out.println("or opretor "+bitwiseor);
        System.out.println("and opretor "+bitwiseand);    
        System.out.println("xor opretor "+bitwisexor);    
        System.out.println("left shift "+bitwisels);    
        System.out.println("right shift "+bitwisers);    

    }
}