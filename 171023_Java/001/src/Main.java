// 001 인사하기
// 이름을 입력 받아 인사말을 출력하는 프로그램

// Example
// What is your name? Brain
// Hello, Brain, nice to meet you

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String name;

        System.out.println("What is your name? ");
        name = scan.nextLine();
        System.out.println("Hello, "+name+", nice to meet you");
    }
}
