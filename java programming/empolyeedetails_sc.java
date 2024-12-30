import java.util.Scanner;

class Employee {
    String name;
    int age;
    int salary;

    public void inputDetails() {

        Scanner scanner = new Scanner(System.in);

        System.out.println("enter employee name");
        name = scanner.nextLine();
        System.out.println("ernter employee age");
        age = scanner.nextInt();
        System.out.println("enter employee salary");
        salary = scanner.nextInt();
        scanner.close();
    }

    public void displayDetails() {
        System.out.println("\n employee details");
        System.out.println("name " + name);
        System.out.println("age " + age);
        System.out.println("salary " + salary);
    }
}

public class empolyeedetails_sc {
    public static void main(String[] args) {
        Employee employee = new Employee();

        employee.inputDetails();
        employee.displayDetails();
    }
}
