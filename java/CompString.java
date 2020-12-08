class whatever{
	static void compIt(String s1, String s2){
	System.out.println("s1: " + s1);
	System.out.println("s2: " + s2);
	System.out.println("s1 == s2: " + (s1 == s2));
	System.out.println("s1 != s2: " + (s1 != s2));
	System.out.println("s1.equals(s2) " + s1.equals(s2));
	}
}
public class CompString{
	public static void main(String[] args){
	String s1 = "weiner";
	String s2 = "winky";
	whatever.compIt(s1, s2);
	String d1 = "cock";
	String d2 = d1;
	whatever.compIt(d1, d2);
	}
}


