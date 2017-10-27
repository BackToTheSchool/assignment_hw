// 029 잘못 된 입력 처리
// 복리이자를 퍼센트 단위롤 받은 다음,
// 원리금이 총 2배가 되는데까지 걸리는 기간을
// 계산하는 프로그램을 짜라.

// years = 72/r

import java.util.Scanner;

public class Main {
    public static void main(String args[]) {

        Scanner scan = new Scanner(System.in);
        double year;
        String stringRate;
        int rate;

        stringRate = "-1";		// 초기화
        rate = Integer.parseInt(stringRate);

        while (rate == -1) {
            System.out.print("What is the rate of return? ");
            stringRate = scan.nextLine();

            rate = Integer.parseInt(stringRate);
            year = rate/72;

            if (rate !=-1) {	// 숫자인지 확인하고 아니면 error
                if (rate == 0)
                    System.out.println("Divide by 0 error.");	// 숫잔데 0이면 에러
                else
                    System.out.println("It wiil take "+year+" years to double your initial investment");
                //나머지 계산 후 리턴
            }
            else
                System.out.println("Sorry. That's not a valid input.");
        }



    }


}
