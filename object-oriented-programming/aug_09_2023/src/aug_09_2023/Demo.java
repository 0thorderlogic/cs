package aug_09_2023;

public class Demo {
	public static void main(String[] args) {
		
		// Answers to the first & second instructions..
		Car objCar_1 = new Car (180, "Swift", "Silver");
		Car objCar_2 = new Car(140, "Alto", "Red");
		
		// Answer to the third instruction..
		objCar_1.brake();
		objCar_1.acc();
		
		System.out.println("-----------------------------------------------------");
		objCar_2.brake();
		objCar_2.acc();
		
		// Answer to the fourth instruction..
		System.out.println("-----------------------------------------------------");
		System.out.println("Colour the Alto is " + objCar_2.colour);
		
		// Answer to the fifth instruction..
		objCar_2.colour= "Blue";
		System.out.println("Colour of the Alto after is now" + objCar_2.colour);
		
		// Answer to the sixth instruction
		objCar_1.model= "Swift_SX";
		System.out.println("Model of Swift changed to " + objCar_1.model);
	}
}
