package important;

import java.util.*;

public class Duplicates {
    public static void main(String[] args) {
        String s = "Virat Kohli scored a century at the Melbourne cricket ground Virat century";
        int count;
        s = s.toLowerCase();
        String[] words = s.split(" ");

        System.out.println("Duplicate words in the given string:");
        for (int i = 0; i < words.length; i++) {
            count = 1;
            if (words[i].equals("0"))
                continue;
            for (int j = i + 1; j < words.length; j++) {
                if (words[i].equals(words[j])) {
                    count++;
                    words[j] = "0"; // Mark as counted
                }
            }
            if (count > 1) {
                System.out.println(words[i]);
            }
        }
    }
}
