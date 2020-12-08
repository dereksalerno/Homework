public class RandomIntComp2{
	public static void main(String[] args){
		int m = 7;
		int i;
		int j;
	while (m < 10){
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
}
