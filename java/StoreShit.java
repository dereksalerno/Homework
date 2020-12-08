public class StoreShit{
	String s = "fluffernutter";
	int storage(String s){
		return s.length() * 2;
		}
	 void print() {
		System.out.println("storage(s) = " + storage(s));
		}
	public static void main(String[] args){
	StoreShit st = new StoreShit();
	st.print();
	}
		
	
}
