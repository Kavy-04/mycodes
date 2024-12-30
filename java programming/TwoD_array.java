import java.util.Scanner;

public class TwoD_array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the sze of an array");

        int size = sc.nextInt();
        int a[][]= new int[size][size];

        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a.length; j++) {
                a[i][j]= sc.nextInt();
            }
        }
    
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a.length; j++) {
                System.out.println("\t"+a[i][j]);
                // System.out.println();
            }

            System.out.println("\n");
        }
    }
}
// public class TwoD_array {

//     public static void main(String[] args) {
//         int [][]a={{25,85,69},{85,15,75},{20,30,65}};

//         for (int i = 0; i <3; i++) {
//             for (int j = 0; j < 3; j++) {
//                 System.out.print("\t"+a[i][j]);
//             }
//             System.out.println("\n");
//         }
//     }
// }

