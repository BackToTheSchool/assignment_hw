// 007 직사각형 방의 면적
// 방의 면적을 계산하는 프로그램을 작성하라. 방의 길이와 폭을
// 피트 단위로 입력 받은 다음 제곱피트와 제곱 미터로 면적을 나타내라.

// Example
// What is the length of the room in feet? 15
// What is the width of the room in feet? 20
// You entered dimensions of 15 feet by 20 feet
// The area is
// 300 square feet
// 27.871 square meters




import java.util.Scanner;


public class Main {

    public static final double m2 = 0.09290304;

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String length, width;
        int l, w;
        double ms;


        System.out.print("What is the length of the room in feet? ");
        length = scan.nextLine();
        System.out.print("What is the width of the room in feet? ");
        width = scan.nextLine();

        l = Integer.parseInt(length);
        w = Integer.parseInt(width);

        ms = l * w * m2;

        System.out.println("You entered dimensions of "+l+" feet by "+w+" feet \n" +
                "The area is\n"+(l*w)+" square feet\n"+ms+" square meters");

    }

}
