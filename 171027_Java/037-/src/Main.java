// 037 암호 생성기
// 안전한 암호를 생성하는 프로그램을 작성하라.
// 암호의 최소 길이, 특수문자 개수, 숫자개수를 입력 받으면
// 이에 해당하는 암호를 생성한다.


// Example
// What's the minimum length? 8
// How many special characters? 2
// How many numbers? 2
// Your password is
// aurn2$1s#

import java.util.Scanner;

public class Main {
    public static void main(String args[]){

        int minLength, spChar, num;
        Scanner scan = new Scanner(System.in);
        System.out.print("What's the minimum length? ");
        minLength = scan.nextInt();
        System.out.print("How many special characters? ");
        spChar = scan.nextInt();
        System.out.print("How many numbers? ");
        num = scan.nextInt();


    }
}
