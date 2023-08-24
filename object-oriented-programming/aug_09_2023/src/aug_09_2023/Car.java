package aug_09_2023;

public class Car {
    int max_speed;
    String colour;
    String model;

    public Car(int speed, String modl, String color) {
	   max_speed= speed;
	   model = modl;
	   colour = color;
	}
    
	public void brake() {
	  if (model.equals("Swift"))
	         System.out.println("Takes 10 mtr to stop while at the speed of 60 km/hr.");
	  else
	          System.out.println("Takes 20 mtr to stop while at the speed of 60 km/hr.");
	}

	public void acc() {
		if (model.equals("Swift"))
		    System.out.println("Takes 4.6s to reach from 0 to 100 km/hr.");
		else
		  System.out.println("Takes 12s to reach from 0 to 100 km/hr.");
	}
}