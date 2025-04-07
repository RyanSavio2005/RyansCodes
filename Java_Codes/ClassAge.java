package samples;

public class ClassAge {
	
	static void ClassAge(int age) {
		if(age<18) {
			System.out.println("Not accessible");
		}else {
			System.out.println("Accessible");
		}
	}
	public static void main(String[] args) {
			ClassAge(17);
		}
		

	}

