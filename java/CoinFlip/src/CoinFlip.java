import java.util.*;
public class CoinFlip {
	public static void main(String[] args){
		Date date = new Date();
		long time = date.getTime();
		Random rand = new Random(time);
		boolean flip = rand.nextBoolean();
		System.out.print("OUTCOME: ");
		System.out.println(flip ? "HEAD" : "TAIL");
		}
	}

