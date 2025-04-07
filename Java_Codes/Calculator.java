package samples;

import java.util.Scanner;
public class Calculator {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		System.out.println("Enter first number:");
		int a=input.nextInt();
		System.out.println("Enter second number:");
		int b=input.nextInt();
		int sum=a+b;
		int difference=a-b;
		System.out.println("Sum is:"+sum);
		System.out.println("Difference is:"+difference);

	}

}
