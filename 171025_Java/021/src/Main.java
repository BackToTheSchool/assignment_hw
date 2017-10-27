// 021 숫자에 해당하는 이름으로 바꾸기
// 1부터 12까지의 숫자를 해당하는 달로 변환시키는
// 프로그램을 만들어보자. 먼저 숫자를 입력받은 다음
// 이에 해당하는 달 이름을 출력한다.
// 만일 범위를 넘어서는 숫자를 입력 받은 경우엔
// 적절한 에러 문구를 출력하자.

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int month;
        String monthInString;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter month in number: ");
        month = scan.nextInt();

        switch(month){
            case 1:
                monthInString = "January";
                break;
            case 2:
                monthInString = "February";
                break;
            case 3:
                monthInString = "March";
                break;
            case 4:
                monthInString = "April";
                break;
            case 5:
                monthInString = "May";
                break;
            case 6:
                monthInString = "June";
                break;
            case 7:
                monthInString = "July";
                break;
            case 8:
                monthInString = "August";
                break;
            case 9:
                monthInString = "September";
                break;
            case 10:
                monthInString = "October";
                break;
            case 11:
                monthInString = "November";
                break;
            case 12:
                monthInString = "December";
                break;
            default :
                monthInString = "Error";
                break;
        }

        if(!monthInString.equals("Error"))
            System.out.println(month+" in String is "+monthInString+".");
        else
            System.out.println(monthInString);

    }
}
