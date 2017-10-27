// 027 입력 값 검증
// 이름과 성, 사번, 우편번호를 입력 받은 다음,
// 다음과 같은 규칙에 맞는지를 점검하는 프로그램 만들자.
// 이름은 반드시 넣어야 한다.
// 성은 반드시 넣어야 한다.
// 이름과 성은 최소한 두 글자 이상이어야 한다.
// 사번은 AA-1234의 형태가 되어야 한다.
// 즉, 두 글자의 알파벳, 하이픈, 4자리 숫자로 구성
// 우편번호는 반드시 숫자여야한다.
// 잘못 된 데이터가 입력되면 에러메시지 출력

import java.util.Scanner;

public class Main {
    public static void main(String args[]){


        String firstName, lastName, zipCode, id;
        int fVerify, lVerify, zVerify, iVerify, counter;              // 유효성 검증 토큰
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the first name: ");
        firstName = scan.nextLine();
        System.out.print("Enter the last name: ");
        lastName = scan.nextLine();
        System.out.print("Enter the ZIP code: ");
        zipCode = scan.nextLine();
        System.out.print("Enter an employee ID: ");
        id=scan.nextLine();

        if (firstName.length() > 2) {
            fVerify = 1;
        }
        else
            fVerify = 0;

        if (lastName.length() > 2) {
            lVerify = 1;
        }
        else
            lVerify = 0;

        zVerify = 0;
        for (counter = 0; counter < zipCode.length(); counter++) {
            if (zipCode.charAt(counter) >= 48 && zipCode.charAt(counter) <= 57) {
                zVerify++;
            }
        }

        if (zVerify != 5)
            zVerify = 0;
        else
            zVerify = 5;

        iVerify = 0;
        for (counter = 0; counter < id.length(); counter++) {
            if (counter <= 1 && ((id.charAt(counter) >= 65 && id.charAt(counter)<= 90)||(id.charAt(counter)>=97&&id.charAt(counter)<=122))) {
                iVerify++;
            }
            else if (counter == 2 && id.charAt(counter) == 45) {
                iVerify++;
            }
            else if (counter <= 5 && id.charAt(counter) >= 48 && id.charAt(counter) <= 57) {
                iVerify++;
            }
            else
                iVerify = iVerify;
        }


        if (fVerify != 1)
            System.out.println("\""+firstName+"\" is not valid first name. It's too short.");
        if (lVerify != 1)
            System.out.println("\""+lastName+"\" is not valid last name. It's too short.");
        if (zVerify != 5)
            System.out.println("The ZIP cod must be numeric.");
        if (iVerify != 6)
            System.out.println(id+" is not valid ID");

        if (fVerify == 1 && lVerify == 1 && zVerify == 5 && iVerify == 6)
            System.out.println("There were no errors found.");


    }
}
