// 011 환율 변환
// 환율을 변환하는 프로그램을 작성하라.
// 여기에서는 유로에서 미국 달러로 변환시킨다.
// 먼저 유로 금액을 입력 받은 다음 유로 환율로 입력을 받는다.
// 그러고는 유로에 해당하는 미국 달러 값을 출력한다.
// 환율 변환 식은 다음과 같다.
// amount_to = amount_from * rate_from / rate_to
// amount_to는 변환 될 미국 달러 가격이다.
// amount_from은 유로 가격이다.
// rate_from은 현재의 유로 환율이다.
// rate_to는 현재의 미국 달러 환율이다.

// Example
// How many Euros are you exchanging? 81
// What is the exchange rate? 137.51
// 81 Euros at an exchange rate of 137.51 is
// 111.38 dollars

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double euro, dollar, rate;

        System.out.print("How many Euros are you exchanging? ");
        euro = scan.nextDouble();
        System.out.print("What is the exchange rate? ");
        rate = scan.nextDouble();
        dollar = euro * rate /100;

        System.out.println(euro+" Euros at an exchange rate of "+rate+" is");
        System.out.println(dollar+" dollars");

    }
}