
public class MaxAndMin {   //this was altered to become a Bitwise operator exercise...
	public static void main(String[] args){
		long l1 = 0xAA;
		long l2 = 0x55;
		System.out.println("l1 = " + l1);
		System.out.println("l1 in binary: " + Long.toBinaryString(l1));
		System.out.println("l1 after >>> 2 shift: " + (l1 >>> 2));
		System.out.println("l1 after >>> 2 shiftin binary: " + Long.toBinaryString(l1 >>> 2));
		System.out.println("l2 = " + l2);
		System.out.println("l2 in binary = " + Long.toBinaryString(l2));
		System.out.println("l2 & l1: " + (l2 & l1));
		System.out.println("l1 & l2: " + (l1 & l2));
		System.out.println("l2 | l1: " + (l2 | l1));
		System.out.println("l1 | l2: " + ((l1 ^= l1) | l2));
		System.out.println("l1 | l2 in Binary : " + Long.toBinaryString((l1 | l2)));
	}
}
