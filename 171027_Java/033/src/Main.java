// 033 Magic 8 Ball
// Magic 8 Ball 게임을 작성하라.
// Magic 8 Ball 게임은 사용자로부터 질문을 입력받아
// 이에 대한 답을 "Yes", "No", "Maybe", "Ask again later"
// 등 중에서 무작위로 대답해주는 게임이다.

import java.util.Scanner;

public class Main {
    public static void main(String args[]){

        Scanner scan = new Scanner(System.in);
        String question;
        int random = (int)(Math.random()*5+1);

        System.out.print("What's your question? ");
        question = scan.nextLine();

        switch(random){
            case 1:
                System.out.println("Yes");
                break;
            case 2:
                System.out.println("No");
                break;
            case 3:
                System.out.println("Maybe");
                break;
            case 4:
                System.out.println("Ask again later");
                break;
        }
    }
}
