public class RandomIntComp{
	public static void main(String[] args){
		int i;
		int j;
	for (int q = 1; q < 25; q++){
		i = (int)(Math.random() * 100);
		j = (int)(Math.random() * 100);
	if (i < j)
		System.out.println(i + " is less than " + j + ".");
		
	else if (i > j) 
		
		System.out.println(i + " is greater than " + j + ".");
	else	
		System.out.println(i + " is equal to " + j + ".");
		
	}
}
}
