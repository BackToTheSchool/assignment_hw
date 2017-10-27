// 025 암호 길이 점검
// 주어진 암호의 복잡도를 결정하는 프로그램을 작성하라.
// 복잡도는 다음과 같은 규칙으로 정한다.
// 아주 약한 암호는 숫자로만 구성, 길이도 8자 미만
// 약한 암호는 영문자로만 구성 길이도 8자 미만
// 강한 암호는 영문자 한 개 이상의 숫자, 8자 이상
// 아주 강한 암호는 영문자, 숫자, 특수문자로 구성 8이상

// Example
// The password '12345'is a very weak password
// The password 'abcdef'is a weak password
// The password 'abc123xyz'is a strong password
// The password '1337h@xor'is a very strong password


import java.util.Scanner;

public class Main {

    public static void main(String args[]){

        Main main = new Main();
        int i;
        String pass, hard;
        Scanner scan = new Scanner(System.in);

        System.out.print("Please enter the passwod: ");
        pass = scan.next();

        switch (main.passwordValidator(pass)) {
            case 0:
                hard="very weak";
                break;
            case 1:
                hard="weak";
                break;
            case 2:
                hard="strong";
                break;
            case 3:
                hard="very strong";
                break;
            default:
                hard="normal";
                break;
        }

        System.out.println("The password \'"+pass+"\' is a "+hard+" password.");



    }


    private int passwordValidator(String pass) {
        int c, i, s, j;	// 문자 c 숫자 i, 특수문자 s, 카운터 j
        c = 0; i = 0; s = 0;
        for (j = 0; j < pass.length(); j++) {
            if ((pass.charAt(j) >= 48 )&&( pass.charAt(j) <= 57)) {
                i++;
            }
            else if ((pass.charAt(j) >= 65) && (pass.charAt(j) <= 90) || (pass.charAt(j) >= 97) && (pass.charAt(j) <= 122)) {
                c++;
            }
            else
                s++;
        }

        if (s == 0 && c == 0 && (s + c + i) < 8) {
            return 0;
        }
        else if (i == 0 && s == 0 && (s + c + i) < 8) {
            return 1;
        }
        else if (c >= 1 && (s + c + i) >= 8 && i >= 1&&s==0) {
            return 2;
        }
        else if (c >= 1 && (s + c + i) >= 8 && i >= 1 && s >= 1) {
            return 3;
        }
        else
            return 4;

    }

}
