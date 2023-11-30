package four;

abstract class Shape {
    private String color;
    private boolean filled;

    // Constructor
    public Shape(String color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    // Abstract method to calculate area
    public abstract double calculateArea();

    // Abstract method to display details
    public abstract void displayDetails();

    // Getters for color and filled
    public String getColor() {
        return color;
    }

    public boolean isFilled() {
        return filled;
    }
}
