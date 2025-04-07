package samples;
import java.util.ArrayList;
import java.util.Collections;

public class SortList {
  public static void main(String[] args) {
    ArrayList<String> cars = new ArrayList<String>();
    cars.add("Volvo");
    cars.add("BMW");
    cars.add("Ford");
    cars.add("Mazda");

    System.out.println("Before sorting: " + cars);
    Collections.sort(cars);  
    System.out.println("After sorting: " + cars);
  }
}