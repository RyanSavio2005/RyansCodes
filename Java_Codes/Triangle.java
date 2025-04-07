package samples;

public class Triangle {
	static void Method1(int x,int y,int z)
	{
		if(x==y&&x==z) {
			System.out.println("It is an equilateral triangle");
		}
		else if(x==y||x==z||y==z) {
			System.out.println("It is an isosceles triangle");
		}
		else
			System.out.println("Scalene");
	}

	public static void main(String[] args) {
		int x=45,y=45,z=34;
		Method1(x,y,z);

	}

}
