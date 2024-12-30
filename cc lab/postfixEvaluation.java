import java.util.Scanner;
import java.util.Stack;
public class postfixEvaluation {
    public static int evaluatePostfix(String expression) {
        Stack<Integer> stack = new Stack<>();

        for(int i=0;i<expression.length();i++){
            char ch = expression.charAt(i);

            if(Character.isDigit(ch)){
                stack.push(ch-'0');

            }
            else{
                int oprend2 = stack.pop();
                int oprend1 = stack.pop();
                int result = 0;

                switch (ch) {
                    case '+':
                    result= oprend1+oprend2;
                    break;
                    case '-':
                    result= oprend1-oprend2;
                    break;
                    case '*':
                    result= oprend1*oprend2;
                    break;
                    case '/':
                           if(oprend2 !=0){
                            result=oprend1/oprend2;
                           }         
                           else{
                            throw new ArithmeticException("DIVISION BY ZERO IS NOT POSSIBLE");
                           }
                    break;
                    default:
                    throw new IllegalArgumentException("INVAILID OPERATOR:" +ch); 
                    
                }
                stack.push(result);
            }
        }
        return stack.pop();
    }    

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the valid postfix expression is : ");
    String expression = sc.nextLine();

    try {
        int result = evaluatePostfix(expression );
        System.out.println("the result of the postfix expression is: "+result);

    } catch (Exception e) {
        System.out.println("error: "+e.getMessage());
    }finally{
        sc.close();
    }
}
}
