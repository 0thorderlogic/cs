package one;

class Manager extends Employee {
    private int bonus;

    public Manager(String name, int employeeId, int bonus) {
        super(name, employeeId);
        this.bonus = bonus;
    }

    @Override
    public void calculateSalary() {
        int totalSalary = 50000 + bonus;
        System.out.println("Manager's Salary: " + totalSalary);
    }

    @Override
    public void setSalary(int salary) throws InvalidSalaryException {
        super.setSalary(salary);
        if (salary < 50000) {
            throw new InvalidSalaryException("Manager's salary should be at least 50000");
        }
    }
}

