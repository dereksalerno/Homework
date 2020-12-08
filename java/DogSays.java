class Dog{
	String name;
	String says;
}
public class DogSays{
	public static void main(String[] args) {
	Dog spot = new Dog();
	spot.name = "Spot";
	spot.says = "Ruff!";
	Dog killer = new Dog();
	killer = spot;
	Dog scruffy = new Dog();
	scruffy.name = "Scruffy";
	scruffy.says = "Wurf!";
	System.out.println("The dog " + spot.name + " says, \"" + spot.says
	 + "\"");
	System.out.println("The dog " + scruffy.name + " says, \"" + 
	scruffy.says + "\"");
	System.out.println("killer == spot: " + (killer == spot)); 
	System.out.println("killer != spot: " + (killer != spot)); 
	System.out.println("killer.equals(spot): " + (killer.equals(spot))); 
	}
}
