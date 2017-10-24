// 012 단리 계산
// 단리를 계산하는 프로그램을 작성하라.
// 원금을 입력 받은 다음 이자를 퍼센트 단위롤 입력 받고,
// 기간을 연 단위로 입력 받은 후 원리금(원금+이자)을 출력해보자.
// 단리 공식은 다음과 같다.
// 원리금 = 원금(1+연이율 * 기간)

// Example
// Enter the principal: 1500
// Enter the rate of interest: 4.3
// Enter the number of years: 4
// After 4 years at 4.3%, the investment will be worth $1758

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double prin, rate, year;
        int op;

        System.out.print("Enter the principal: ");
        prin = scan.nextDouble();
        System.out.print("Enter the rate of interest: ");
        rate = scan.nextDouble();
        System.out.print("Enter the number of years: ");
        year = scan.nextDouble();
        op = (int) (prin*(1+rate/100*year));

        System.out.println("After "+year+" years at "+rate+"%, the investment" +
                "will be worth $"+op);

    }
}