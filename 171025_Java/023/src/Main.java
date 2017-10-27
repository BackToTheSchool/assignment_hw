// 023 자동차 문제 해결
// 자동차에 대한 문제를 해결하는 프로그램을 작성하라.
// 이를 위해 다음의 의사결정 트리를 이용하라.

// Example
// Is the car silent when you turn the key? y
// Are the battery terminals corroded? n
// The battery cabled may be damaged.
// Replace cables and try again.

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        String yn;

        System.out.print("q1 ");
        yn = scan.nextLine();
        if (yn.equals("y")) {
            System.out.print("q2-1 ");
            yn = scan.next();
            if (yn.equals("y"))
                System.out.println("a1 ");
            else
                System.out.println("a2 ");
        }
        else {
            System.out.print("q2-2 ");
            yn = scan.next();
            if (yn.equals("y")) {
                System.out.println("a3 ");
            }
            else {
                System.out.print("q3 ");
                yn = scan.next();
                if (yn.equals("y"))
                    System.out.println("a4 ");
                else {
                    System.out.print("q4 ");
                    yn = scan.next();
                    if (yn.equals("y")) {
                        System.out.print("q5 ");
                        yn = scan.next();
                        if (yn.equals("y")) {
                            System.out.println("a5 ");
                        }
                        else System.out.println("a6 ");
                    }
                    else
                        System.out.println("Wrong answer");
                }
            }
        }


    }
}
