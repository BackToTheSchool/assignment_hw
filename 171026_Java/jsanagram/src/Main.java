import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the first word : ");
        String word = scan.next();
        System.out.print("Enter the second word: ");
        String word2 = scan.next();
        int count = word.length();
        int b = 0;
        int d = 0;
        int c = 0;
        while( count > 0){
            while(c < count) {
                char ab = word.charAt(b);
                String ac = Character.toString(ab);
                if (word2.contains(ac)) {
                    d++;
                    b++;
                } else if (!word2.contains(ac)) {
                    b++;
                }
                c++;
            }
            count--;

        }
        if(d == word.length()){
            System.out.print("Two words are same");
        }
        else
            System.out.print("Two words are different");

    }
}