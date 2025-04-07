package samples;
import java.util.Scanner;
public class Roots {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		System.out.println("Enter the value of a:");
		int a=input.nextInt();
		System.out.println("Enter the value of b:");
		int b=input.nextInt();
		System.out.println("Enter the value of c:");
		int c=input.nextInt();
		if(a==0) {
			System.out.println("Input is invalid");
			input.close();
            return;
		}
		int disc=b*b-4*a*c;
		if(disc>0) {
			System.out.println("Roots are real and distinct");
			double x1 = (-b + Math.sqrt(disc)) / (2.0 * a);
			double x2 = (-b - Math.sqrt(disc)) / (2.0 * a);
			System.out.println("Root 1 is:"+x1);
			System.out.println("Root 2 is:"+x2);
		}
		else if(disc==0) {
			System.out.println("Roots are real and equal");
			double x = -b / (2.0 * a);
            System.out.println("Root: " + x);
			
		}else {
			System.out.println("Imaginary Roots");
			   double x1 = -b / (2.0 * a);
	            double x2 = Math.sqrt(-disc) / (2.0 * a);
	            System.out.println(x1);
	            System.out.println(x2);
		}
	}

}
