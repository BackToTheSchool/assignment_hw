// 032 숫자 맞추기 게임
// 난이도1 : 1~10, 2:1~100, 3:1~1000
// 난이도를 입력받고 게임을 시작
// 범위 내에서 무작위 숫자를 하나 선택 후
// 맞추라고 출력
// 플레이어가 맞는 숫자를 입력 할 때 마다,
// 업다운 출력
// 정답을 맞추면 몇번만에 맞췄는지 출력하고
// 게임을 다시 할 것인지 묻는다.

import java.util.Scanner;

public class Main {
    public static void main(String args[]) {

        Scanner scan = new Scanner(System.in);


        int count, level, lim;
        double random_number, check;
        String re;
        re = "y";
        System.out.println("Let's play Guess the Number.");

        while (re.equals("y")) {
            System.out.print("Pick a difficulty level (1, 2, or 3): ");
            count = 1;
            level = scan.nextInt();

            if (level == 1) {
                lim = 10;
            }
            else if (level == 2) {
                lim = 100;
            }
            else if (level == 3) {
                lim = 1000;
            }
            else
                lim = 10;

            random_number = (int)(Math.random() * lim + 1);

            System.out.print("I have my number. What's your guess? ");
            check = 0;
            while (random_number != check) {
                check = scan.nextInt();
                if (random_number != check) {
                    if (random_number > check)
                        System.out.print("Too low. Guess again: ");
                    else
                        System.out.print("Too high. Guess again: ");
                    count++;

                }
                else {
                    System.out.println("You got it in "+count+" guesses!");
                    System.out.print("Play again? (y/n) ");
                    re = scan.next();

                }
            }
        }

    }

}
