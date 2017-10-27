// 026 카드 대금 상환 기간
// 카드 대금을 상환하는 데 걸리는 개월 수를 계산하는
// 프로그램을 작성하시오. 총 대금, 연이율, 월 상환 금액
// 을 입력받은 다음 상환에 소요되는 개월 수를 출력하면 된다.
// n=-1/30*log(1+b/p*(1+pow((1+i),30)))/log(1+i)

// 식이 거지라서 제낍니다 ㅎㅎ

import java.util.Scanner;

import static java.lang.Math.log;
import static java.lang.Math.pow;

public class Main {
    public static void main(String args[]){

        Main m = new Main();

        double b, i, p, r;
        Scanner scan = new Scanner(System.in);

        System.out.print("What is your balance? ");
        b=scan.nextDouble();
        System.out.print("What is the APR on the card(as percent)? ");
        i=scan.nextDouble();
        System.out.print("What is the monthly payment you can make? ");
        p=scan.nextDouble();

        System.out.println("\nIt will take you "+m.cmupo(b,i,p)+" months to pay off this card");
        r = m.cmupo(b, i, p);
        System.out.println(m.cmupo(b, i, p));
    }


    private double cmupo(double b, double i, double p) {
        return -1 / 30 * log(1 + b / p*(1 + pow(1 + i/36500, 30))) / log(1 + i/36500);

    }
}
