package four;

class Circle extends Shape implements Resizable {
    private double radius;

    // Constructor
    public Circle(String color, boolean filled, double radius) {
        super(color, filled);
        this.radius = radius;
    }

    // Implementation of calculateArea for Circle
    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }

    // Implementation of displayDetails for Circle
    @Override
    public void displayDetails() {
        System.out.println("Circle - Color: " + getColor() + ", Filled: " + isFilled() + ", Radius: " + radius);
    }

    // Implementation of resize for Circle
    @Override
    public void resize(int percentage) {
        radius *= (1.0 + (percentage / 100.0));
    }
}
