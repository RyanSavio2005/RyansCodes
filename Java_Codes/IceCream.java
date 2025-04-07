package samples;

import java.util.Scanner;
public class IceCream {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		System.out.println("Menu Items");
		System.out.println("1.Strawberry");
		System.out.println("2.Chocolate");
		System.out.println("3.Vanilla");
		System.out.println("4.Mango");
		System.out.println("Enter your choice:");
		int choice=input.nextInt();
		switch(choice) {
		case 1:
			System.out.println("Enter the price:");
			int price=input.nextInt();
			System.out.println("Enter the quantity:");
			int n=input.nextInt();
			int total=n*price;
			System.out.println("Total amount is:"+total);
			break;
		case 2:
			System.out.println("Enter the price:");
			int price1=input.nextInt();
			System.out.println("Enter the quantity:");
			int n1=input.nextInt();
			int total1=n1*price1;
			System.out.println("Total amount is:"+total1);
			break;
		case 3:
			System.out.println("Enter the price:");
			int price2=input.nextInt();
			System.out.println("Enter the quantity:");
			int n2=input.nextInt();
			int total2=n2*price2;
			System.out.println("Total amount is:"+total2);
			break;
		case 4:
			System.out.println("Enter the price:");
			int price3=input.nextInt();
			System.out.println("Enter the quantity:");
			int n3=input.nextInt();
			int total3=n3*price3;
			System.out.println("Total amount is:"+total3);
			break;
		  default:
	            System.out.println("Invalid Choice");
		}
	

	}

}
