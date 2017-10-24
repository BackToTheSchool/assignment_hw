// 014 세금 계산기
// 입력한 가격에 대한 세금을 계산하는 간단한 프로그램을 작성하라.
// 프로그램은 주문 가격과 함께 주 이름을 입력 받는데,
// 주 이름이 'WI'인 경우 세율은 5.5%가 된다.
// 프로그램은 위스콘신 주 거주자에 해당하는 소계, 세율, 합계 금액을 출력하지만
// 다른 주에 거주하는 경우에는 합계 금액만을 출력한다.

// Example
// What is the order amount? 10
// What is the state? WI
// The subtotal is $10.00
// The tax is $0.55
// The total is $10.55

// What is the order amount? 10
// What is the state? MN
// The total is $10.55

import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int amount;
        final double tax = 5.5;
        String state;
        DecimalFormat form = new DecimalFormat();

        System.out.print("What is the order amount? ");
        amount = scan.nextInt();
        System.out.print("What is the state? ");
        state = scan.next();


        if(state.equals("WI")){
            System.out.println("The subtotal is $"+amount);
            System.out.println("The tax is $"+amount*tax/100);
        }

        System.out.println("The total is $"+form.format(amount*(1+tax/100)));

    }
}