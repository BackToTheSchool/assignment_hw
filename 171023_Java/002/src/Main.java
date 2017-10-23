// 002 글자 수 세기
// 문자열을 입력 받은 문자열과 문자열의 글자 수를 출력하는 프로그램을 작성하라

// Example
// What is the input string? Homer
// Homer has 5 characters.



import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String name;
        System.out.print("What is the input string? ");
        name = scan.nextLine();
        System.out.println(name+" has "+ name.length()+ " characters.");
    }
}
