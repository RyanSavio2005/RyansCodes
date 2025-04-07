package samples;

import java.util.ArrayList;

public class SearchList {
  public static void main(String[] args) {
    ArrayList<String> cars = new ArrayList<String>();
    cars.add("Volvo");
    cars.add("BMW");
    cars.add("Ford");
    cars.add("Mazda");

    String search = "Mercedes";

    System.out.println(cars.contains(search) ? search + " found." : search + " not found.");
  }
}