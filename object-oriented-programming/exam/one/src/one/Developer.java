package one;

class Developer extends Employee {
    private int overtimeHours;

    public Developer(String name, int employeeId, int overtimeHours) {
        super(name, employeeId);
        this.overtimeHours = overtimeHours;
    }

    @Override
    public void calculateSalary() {
        int totalSalary = 40000 + (overtimeHours * 100);
        System.out.println("Developer's Salary: " + totalSalary);
    }

    @Override
    public void setSalary(int salary) throws InvalidSalaryException {
        super.setSalary(salary);
        if (salary < 40000) {
            throw new InvalidSalaryException("Developer's salary should be at least 40000");
        }
    }
}

