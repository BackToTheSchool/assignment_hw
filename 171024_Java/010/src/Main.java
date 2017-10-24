// 010 셀프 계산대
// 간단한 셀프 계산대 시스템을 만들어 보자.
// 세 가지 물건의 가격과 수량을 각각 입력 받은 다음 소계를 구하고
// 소계에 대한 5.5%의 세금을 계산하자.
// 그리고 물건 종류별 수량과 전체 수량을 출력한 후 가격 소계, 세금, 합계 금액을 출력하자.

// Example
// Price of item 1: 25
// Quantity of item 1: 2
// Price of item 2: 10
// Quantity of item 2: 1
// Price of item 3: 4
// Quantity of item 3: 1
// Subtotal : $64.00
// Tax: $3.52
// Total: $67.52

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[][] item = new int[2][3];
        int i, total = 0;
        final double tax = 5.5/100;

        for (i = 0; i < 3; i++) {
            System.out.print("Price of item " + (i + 1) + ": ");
            item[0][i] = scan.nextInt();
            System.out.print("Quantity of item " + (i + 1) + ": ");
            item[1][i] = scan.nextInt();
            total = total + item[0][i]*item[1][i];
        }


        System.out.println("Subtotal: $"+total);
        System.out.println("Tax: $"+total*tax);
        System.out.println("Total: $"+total*(1+tax));

    }
}