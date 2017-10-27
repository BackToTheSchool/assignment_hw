// 018 온도 변환
// 화씨온도와 섭씨온도를 서로 변환시키는 프로그램 작성

// Example
// Press C to convert from Fahrenheit to Celsius
// Press F to convert from Celsius to Fahrenheit
// Your choice: C

// Please enter the temperature in F: 32
// The temperature in Celsius is 0.

import java.util.Scanner;

public class Main {


    public static void main(String[] args) {

        double cel, fahr;
        String selector;
        Scanner scan = new Scanner(System.in);

        System.out.print("Press C to convert from Fahrenheit to Celsius: ");
        System.out.print("Press F to convert from Celsius to Fahrenheit: ");
        selector = scan.next();

        if(selector.equals("F")||selector.equals("f")) {
            System.out.println("\nPlease enter the temperature in C");
            cel = scan.nextDouble();
            fahr = (cel*9/5)+32;
            System.out.println("The temperature in F is "+fahr);
        }else if(selector.equals("C")||selector.equals("c")) {
            System.out.println("\nPlease enter the temperature in F");
            fahr = scan.nextDouble();
            cel = (fahr-32)*5/9;
            System.out.println("The temperature in C is "+cel);
        }


    }
}
