class FloatBox {
	float f;
}
public class MethAl{
	static void passIt(FloatBox fb){
		fb.f = 200.17f;
}	
public static void main(String[] args){
	FloatBox fb1 = new FloatBox();
	fb1.f = 123.456f;
	System.out.println("fb1.f: " + fb1.f);
	passIt(fb1);
	System.out.println("fb1.f: " + fb1.f);
	}
} 
