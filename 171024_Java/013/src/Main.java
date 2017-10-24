// 013 복리 계산
// 복리를 통해 투자 수익을 계산하는 프로그램을 작성하라.
// 프로그램은 원금 , 투자기간, 연이율, 연간 수익이 지급되는 횟수를 입력 받는다.
// 원리금 = 원금(1 + 연이율/연간이자지급회수)^(투자기간*연간이자지급회수)

// Example
// What is the principal amount? 1500
// What is the rate: 4.3
// What is the number of years: 6
// What is the number of times the interest
// is compounded per year: 4
// $1500 invested at 4.3% for 6 years compounded 4 times per year is $1938.84

import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double prin, rate, year, op;
        int tipy;
        DecimalFormat form = new DecimalFormat("#.##");



        System.out.print("What is the principal amount? ");
        prin = scan.nextDouble();
        System.out.print("What is the rate: ");
        rate = scan.nextDouble();
        System.out.print("What is the number of years: ");
        year = scan.nextDouble();
        System.out.print("What is the number of times the interest\n" +
                "is compounded per year: ");
        tipy = scan.nextInt();

        op = prin * Math.pow((1 + (rate / 100 / tipy)),(year * tipy));

        System.out.println("$"+prin+" invested at "+rate+"% for "+year+" years compounded " +
                +tipy+" times per year is $"+form.format(op));

    }
}