package four;

class Rectangle extends Shape implements Resizable {
    private double width;
    private double height;

    // Constructor
    public Rectangle(String color, boolean filled, double width, double height) {
        super(color, filled);
        this.width = width;
        this.height = height;
    }

    // Implementation of calculateArea for Rectangle
    @Override
    public double calculateArea() {
        return width * height;
    }

    // Implementation of displayDetails for Rectangle
    @Override
    public void displayDetails() {
        System.out.println("Rectangle - Color: " + getColor() + ", Filled: " + isFilled() +
                ", Width: " + width + ", Height: " + height);
    }

    // Implementation of resize for Rectangle
    @Override
    public void resize(int percentage) {
        width *= (1.0 + (percentage / 100.0));
        height *= (1.0 + (percentage / 100.0));
    }
}
