package four;

public class ShapeDemo {
    public static void main(String[] args) {
        // Create instances of Circle and Rectangle
        Circle circle = new Circle("Red", true, 5.0);
        Rectangle rectangle = new Rectangle("Blue", false, 4.0, 6.0);

        // Display details and calculate area before resizing
        System.out.println("Before Resizing:");
        circle.displayDetails();
        System.out.println("Area: " + circle.calculateArea());

        rectangle.displayDetails();
        System.out.println("Area: " + rectangle.calculateArea());

        // Resize the shapes
        circle.resize(20);
        rectangle.resize(15);

        // Display details and calculate area after resizing
        System.out.println("\nAfter Resizing:");
        circle.displayDetails();
        System.out.println("Area: " + circle.calculateArea());

        rectangle.displayDetails();
        System.out.println("Area: " + rectangle.calculateArea());
    }
}