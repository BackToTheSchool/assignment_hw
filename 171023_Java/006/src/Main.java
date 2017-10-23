// 006 퇴직 계산기
// 정년까지 몇 년 남았는지, 퇴직하는 해는 몇 년이 되는지를 계산하는
// 프로그램을 작성하라. 이 프로그램은 현재 나이와 퇴직하고자 하는
// 나이를 입력 받아 다음의 출력 예와 같이 나타낸다.

// Example
// What is your current age? 25
// At what age would you like to retire? 65
// You have 40 years left until you can retire.
// It's 2017, so you can retire in 2057.



import java.util.Calendar;
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String cAge, rAge;
        int current, retire;
        int year = Calendar.getInstance().get(Calendar.YEAR);

        System.out.print("What is your current age? ");
        cAge = scan.nextLine();
        System.out.print("At what age would you like to retire? ");
        rAge = scan.nextLine();

        current = Integer.parseInt(cAge);
        retire = Integer.parseInt(rAge);

        System.out.println("You have "+(retire-current)+" years left until you can retire.");
        System.out.print("It's "+year+", so you can retire in "+(year-current+retire)+".");

    }

}
