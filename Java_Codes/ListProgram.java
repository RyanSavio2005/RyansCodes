package samples;
import java.util.*;
public class ListProgram {

	public static void main(String[] args) {
		LinkedList<Integer>list1=new LinkedList<Integer>();
		list1.add(10);
		list1.add(20);
		list1.add(30);
		list1.add(40);
		System.out.println(list1);
		list1.removeFirst();
		System.out.println(list1);
		list1.removeLast();
		System.out.println(list1);

	}

}
