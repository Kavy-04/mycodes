import java.util.Arrays;
import java.util.Scanner;

public class sorting_listname {
    public static void main(String[] args) {
        Scanner scanner= new Scanner(System.in);
        scanner.close();

        System.out.println("enter the number of names ");
        int numNames= scanner.nextInt();
        scanner.nextLine();

        String[] names= new String[numNames];

        System.out.println("enter the names");;
        for(int i=0;i<numNames;i++)
        {
            names[i]= scanner.nextLine();
        }

        Arrays.sort(names);

        System.out.println("sorted names in asscending order");
        for(String n: names)
        {
            System.out.println(n);
        }


    }
}
 