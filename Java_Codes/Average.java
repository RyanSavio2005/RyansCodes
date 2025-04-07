package samples;
import java.util.*;
public class Average {
	public void calcAvg(int x,int y,int z,int sum,double avg) {
		sum=x+y+z;
		avg=(double)sum/3;
	}
	public double printAvg(double avg) {
		return avg;
		
	}
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int sum=0;
		double avg=0;
		System.out.println("Enter the value of x,y and z:\n");
		int x = input.nextInt();
		int y=input.nextInt();
		int z=input.nextInt();
		Average a=new Average();
		a.calcAvg(x,y,z,sum,avg);
		a.printAvg(avg);
		
	}
}
