class Calculator {
    public int add(int a, int b){
        return a+b;
    }
    public int sub(int a,int b)
    {
        return a-b;
    }
    public int multy(int a, int b)
    {
        return a*b;
    }
    public int div(int a, int b)
    {
        return a/b;
    }
}
public class userdefinepackege {
    public static void main(String[] args) {
        Calculator calc = new Calculator();

        int result= calc.add(10, 20);
        System.out.println("addition"+" "+result);
    }
}
