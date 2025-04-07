package samples;

import java.util.Scanner;
public class Discount {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		System.out.println("Enter the type of item:");
		String item=input.nextLine();
		double price=150.00;
		System.out.println("Enter the quantity of the items:");
		int qt=input.nextInt();
		double flat=(price)-(0.7*qt);
		System.out.println("Enter the volume of the item:");
		double volume=input.nextDouble();
		double vd=(price)-(0.9*qt);
		double fbill=flat+vd;
		System.out.println("Price of the item after discount is:"+fbill);
		
		

	}

}
