package samples;
import java.util.ArrayList;
import java.util.Collections;
public class ReverseList {
  public static void main(String[] args) {
   ArrayList<String> cars = new ArrayList<String>();
    cars.add("Volvo");
    cars.add("BMW");
    cars.add("Ford");
    cars.add("Mazda");
    System.out.println("Original ArrayList: " + cars);
    Collections.reverse(cars);
    System.out.println("Reversed ArrayList: " + cars);
  }
}