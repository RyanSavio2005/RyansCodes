package samples;

public class Car {
	public void Method1()
	{
		System.out.println("Car");
	}
	public void Method2()
	{
		int x=200;
		System.out.println("The speed of the car is:"+x);
	}
	public static void main(String[] args) {
		Car obj=new Car();
		obj.Method1();
		obj.Method2();
		

	}

}
