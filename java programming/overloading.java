
 class Calculator {

    public int add(int a,int b)
    {
        return a+b;
    }
    public int add(int a, int b, int c)
    {
        return a+b+c;
    }
    public double add(double a, double b)
    {
        return a+b;
    }

    
}

public class overloading {
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        System.out.println(calc.add(10,20));
        System.out.println(calc.add(10, 20,30));
        System.out.println(calc.add(10.00, 20.00));
    }
}
