class Statty{
	static int i = 24;
	}
public class StatInst{
	public static void main (String [] args){
	Statty s1 = new Statty();
	Statty s2 = new Statty();
	System.out.println(s1.i);
	s1.i = 32;
	System.out.println(s2.i);
}
}
