// 020 여러 주를 지원하는 세금 계산기
// 여러 주와 하나의 주 내에 있는 카운티에 따라 달라지는
// 세금 계산기를 작성하라. 먼저 주문가격을 입력 받고
// 주문할 주를 입력 받는다.
// 위스콘신 주의 경우에는 카운티를 추가로 입력 받는다.

import java.util.Scanner;

public class Main {


    public static void main(String[] args) {

        double amount, tax, cTax;
        String state, county;
        Scanner scan = new Scanner(System.in);
        tax=5.5;

        System.out.print("Amount: ");
        amount = scan.nextDouble();
        System.out.print("State: ");
        state = scan.next();


        if(state.equals("WI")) {
            System.out.print("County: ");
            county = scan.nextLine();
            county = scan.nextLine();
            System.out.println("The tax is "+amount * tax/100+".");
            if(county.equals("Eau Claire"))
                cTax=0.5;
            else if(county.equals("Dunn"))
                cTax=0.4;
            else cTax=0;
            System.out.println("County tax is "+amount * cTax/100+".");
        }
        else cTax=0;

        System.out.println("The total is "+amount*(1+(tax+cTax)/100)+".");


    }
}
