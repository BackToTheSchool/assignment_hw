// 004 Mad Libs
// 명사, 동사, 형용사, 부사에 해당되는 단어를 입력 받은 후
// 여러분이 만든 이야기에 넣어 완성된 이야기를 출력해보자

// Enter a noun: dog
// Enter a verb: walk
// Enter an adjective: blue
// Enter an adverb: quickly
// Do you walk your blue dog quickly? That's hilarious!



import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String noun, verb, adjective, adverb;

        System.out.print("Enter a noun: ");
        noun= scan.nextLine();
        System.out.print("Enter a verb: ");
        verb = scan.nextLine();
        System.out.print("Enter an adjective: ");
        adjective = scan.nextLine();
        System.out.print("Enter an adverb: ");
        adverb = scan.nextLine();
        System.out.println("Do you " +verb+ " your " +adjective+" "+noun+" "+adverb+"? That's hilarious!");
    }
}
