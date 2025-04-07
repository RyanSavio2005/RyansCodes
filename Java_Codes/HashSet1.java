package samples;
import java.util.HashSet;

public class HashSet1 {
  public static void main(String[] args) {
    HashSet<String> breed = new HashSet<String>();
    breed.add("Labrador");
    breed.add("Husky");
    breed.add("German Shepherd");
    breed.add("Golden Retriever");

    System.out.println("HashSet: " + breed);

    System.out.println("Number of elements in HashSet: " + breed.size());
  }
}
