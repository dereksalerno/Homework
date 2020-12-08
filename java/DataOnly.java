public class DataOnly {
	int i;
	double d;
	boolean b;
	
	public static void main(String[] args){
	DataOnly d = new DataOnly();
	d.i = 71;
	d.d = 523452.1234523546;
	d.b = true;
	System.out.println("DataOnly i = " + d.i + ".");
	System.out.println("DataOnly d = " + d.d + ".");
	System.out.println("THings are going well: " + d.b);
}
 }
