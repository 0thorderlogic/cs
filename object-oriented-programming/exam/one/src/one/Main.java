package one;

public class Main {
    public static void main(String[] args) {
        try {
            Employee[] employees = new Employee[3];
            employees[0] = new Manager("John", 101, 5000);
            employees[1] = new Developer("Alice", 102, 10);
            employees[2] = new Developer("Bob", 103, 5);

            for (Employee employee : employees) {
                employee.calculateSalary();
            }

            Manager manager = new Manager("Sam", 104, 3000);
            try {
                manager.setSalary(45000);
                System.out.println("Manager's salary set successfully.");
            } catch (InvalidSalaryException e) {
                System.out.println("Error: " + e.getMessage());
            }

            Developer developer = new Developer("Eve", 105, 8);
            try {
                developer.setSalary(35000);
                System.out.println("Developer's salary set successfully.");
            } catch (InvalidSalaryException e) {
                System.out.println("Error: " + e.getMessage());
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}