// 019 BMI 계산기
// 사용자로부터 사람의 키(인치 단위), 몸무게(파운드 단위)를
// 입력 받아 BMI를 계산하는 프로그램을 작성하라.
// BMI = (weight/(height * height))*703

// Example
// Your BMI is 19.5
// You are within the ideal weight range.

// Your BMI is 32.5
// You are overweight. You should see your doctor.

import java.util.Scanner;

public class Main {


    public static void main(String[] args) {

        int weight, height;
        double bmi;
        Scanner scan = new Scanner(System.in);

        System.out.print("Weight: ");
        weight = scan.nextInt();
        System.out.print("Height: ");
        height = scan.nextInt();

        bmi = (weight/(height*height))*703;

        System.out.println("Your BMI is "+bmi+".");

        if(bmi>=18.5 && bmi<=25)
            System.out.println("You are within the ideal weight range.");
        else if(bmi>25)
            System.out.println("You are overweight. You should see your doctor.");
        else
            System.out.println("You are underweight. You should see your doctor.");

    }
}
