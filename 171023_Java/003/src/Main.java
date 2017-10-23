// 003 따옴표 출력
// 인용구와 그 말을 한 사람을 입력 받는 프로그램을 작성하라.
// 인용구와 사람 이름은 다음의 출력 예와 같이 나타내보자.

// Example
// What is the quotes? These aren't the droids you're looking for.
// Who said it? Obi-Wan Kenobi
// Obi-Wan Kenobi says, "These aren't the droids you're looking for."



import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String name, quotes;
        System.out.print("What is the the quotes? ");
        quotes = scan.nextLine();
        System.out.print("Who said it? ");
        name = scan.nextLine();
        System.out.println(name+" says, "+ quotes + ".");
    }
}
