package samples;

public class DoWhile {
	public static void main(String[]args) {
		  int num = -10;
	        
	        do {
	            System.out.println("Current number: " + num);
	            num++; // Increment the number
	        } while (num <= 0); // Loop runs until num becomes positive

	        System.out.println("Loop ended. Final number: " + num);
	}

}
