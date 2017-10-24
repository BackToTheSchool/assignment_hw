// 009 페인트 계산기
// 천장을 칠하는 데 필요한 페인트 양을 구하는 프로그램을 작성하라.
// 길이와 폭을 입력 받은 다음, 1리터에 9m2을 칠한다고 가정하여 계산하자.
// 그리고 천장을 칠하는 데 필요한 페인트 양을 정수로 표현해보자.

// Example
// You will need to purchase 2 liters of
// paint to cover 10 square meters.

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String length, width;
        double d ;

        System.out.print("What is the length of the room? ");
        length = scan.nextLine();
        System.out.print("What is the width of the room? ");
        width = scan.nextLine();
        d = Integer.parseInt(length) * Integer.parseInt(width);

        System.out.println("You will need to purchase " +Math.ceil(d/9)+" liters of\npaint to cover "+d+" square meters");
    }
}