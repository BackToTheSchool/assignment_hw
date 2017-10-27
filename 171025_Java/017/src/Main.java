// 017 혈중 알코올 농도 계산기
// 몸무게, 성별, 음주량(잔 수), 마신 술에 해당하는 알코올량,
// 마지막으로 술을 마신 후 경과 시간을 입력 받은 다음
// 다음식을 이용하여 혈중 알코올 농도(BAC)를
// 구하는 프로그램을 작성하라.
// BAC = (알콜량*5.14/몸무게*흡수비 계수)-0.015 *경과 시간

// Example
// Your BAC is 0.08
// It is not legal for you to drive.

import java.util.Scanner;

public class Main {

    public static double rate(String sex){
        if(sex.equals("m"))
            return 0.7;
        else if (sex.equals("f"))
            return 0.6;
        else
            return 0;

    }

    public static void main(String[] args) {

        int weight, alc, time;
        double BAC;
        String sex, drive;
        Scanner scan = new Scanner(System.in);
        System.out.println("Weight: ");
        weight = scan.nextInt();
        System.out.println("Sex(m/f): ");
        sex = scan.next();
        System.out.println("Alcohol: ");
        alc = scan.nextInt();
        System.out.println("Time passed: ");
        time = scan.nextInt();

        BAC = (alc*5.14/weight*rate(sex))-0.015*time;
        if(BAC>0.7)
            drive="illegal";
        else
            drive="legal";

        System.out.println("Your BAC is "+BAC+"\nYou are "+drive+" to drive");


    }
}
