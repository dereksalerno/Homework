public class AutoBox{
	public static void main(String[]args){
	char a = 'z';
	Character z = new Character(a);
	System.out.println("Character z, which is char a = z: " + z);
	Integer i = new Integer(31);
	System.out.println("As an Integer object: " + i);
	int f = i;
	System.out.println("As an int, f: " + f);
	System.out.println("As a sum of the two: " + (i+f));
	}
}
