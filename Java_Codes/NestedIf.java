package samples;

public class NestedIf {

	public static void main(String[] args) {
		int n=10;
		  if (n > 0) {  
	            System.out.println("The number is positive.");

	            if (n % 2 == 0) {  
	                System.out.println("It is an even number.");
	            } else {
	                System.out.println("It is an odd number.");
	            }

	        } else {
	            System.out.println("The number is not positive.");
	        }

	}

}
