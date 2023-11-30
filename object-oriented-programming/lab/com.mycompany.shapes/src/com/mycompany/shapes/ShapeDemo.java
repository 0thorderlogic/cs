// ShapeDemo.java
package com.mycompany.shapes;

public class ShapeDemo {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0);
        Rectangle rectangle = new Rectangle(4.0, 6.0);

        // Demonstrate the use of the Drawable interface
        drawShape(circle);
        drawShape(rectangle);
    }

    // Method to demonstrate the use of the Drawable interface
    private static void drawShape(Drawable shape) {
        shape.draw();
    }
}
