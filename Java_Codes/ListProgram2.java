package samples;
import java.util.*;

public class ListProgram2 {
  public static void main(String[] args) {
    LinkedList<Integer> list1 = new LinkedList<Integer>();
    list1.add(10);
    list1.add(20);
    list1.add(30);
    list1.add(40);
    list1.add(50);
    list1.add(60);
    list1.add(70);

    for (int i = 0; i < list1.size(); i++) {
      System.out.println("Index " + i + ": " + list1.get(i));
    }
  }
}