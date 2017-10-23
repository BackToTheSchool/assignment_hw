// 005 간단한 수학
// 두 개의 숫자를 입력 받은 후, 두 숫자를 이용한 사칙연산 결과를
// 다음의 출력 예와 같이 나타내보자.

// What is the first number? 10
// What is the second number? 5
// 10 + 5 = 15
// 10 - 5 = 5
// 10 * 5 = 50
// 10 / 5 = 2


import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String fNum, sNum;
        int first, second;

        System.out.print("What is the first number? ");
        fNum = scan.nextLine();
        System.out.print("What is the second number? ");
        sNum = scan.nextLine();
        first = Integer.parseInt(fNum);
        second = Integer.parseInt(sNum);
        System.out.println(first+" + "+second+" = "+(first+second)+"\n"+first+" - "+second+" = "+
                (first-second)+"\n"+first+" * "+second+" = "+(first*second)+"\n"+first+" / "+second+" = "+(first/second)+"\n");
    }

}
