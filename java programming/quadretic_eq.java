import java.util.Scanner;

public class quadretic_eq {
    public static void main(String[] args) {
        
        Scanner scanner=new Scanner(System.in);
        scanner.close();


        System.out.println("enter the coefficient of a:");
        double a = scanner.nextDouble();

        System.out.println("enter the coefficient of b: ");
        double b= scanner.nextDouble();

        System.out.println("enter the coefficient of c: ");
        double c = scanner.nextDouble();

        double discrement = b*b-4*a*c;
        
        if (discrement>0) {

            double root1 = (-b+(Math.sqrt(discrement))/(2*a));
            double root2 = (-b-(Math.sqrt(discrement))/(2*a));
            
            System.out.println("real solution");
            System.out.println("root1: "+root1);
            System.out.println("root2: "+root2);
        }else if (discrement==0) {
            double root=-b/2*a;

            System.out.println("real solution");
            System.out.println("root: "+root);
        }else {
            System.out.println("no real solution");
        }
      

    }
}
