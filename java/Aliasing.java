class HoldAFloat{

	float f;
}
public class Aliasing{
	public static void main(String[]args){
	HoldAFloat HAF1 = new HoldAFloat();
	HAF1.f = 40.37f;
	HoldAFloat HAF2 = new HoldAFloat();
	HAF2.f = 61.773f;
	System.out.println("HAF1: " + HAF1.f);
	System.out.println("HAF2: " + HAF2.f);
	HAF1 = HAF2;
	System.out.println("HAF1: " + HAF1.f);
	System.out.println("HAF2: " + HAF2.f);
	HAF2.f = 300.773f;
	System.out.println("HAF1: " + HAF1.f);
	System.out.println("HAF2: " + HAF2.f);
	}
}
