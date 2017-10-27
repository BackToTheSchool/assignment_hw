// 035 대회 또는 그리기 대회의 수상자를 선택하는 프로그램을 작성하라.
// 프로그램은 아무것도 입력하지 않을 때까지 대회 참가자 이름을
// 입력 받은 다음 이 중에서 무작위로 수상자를 선정한다.

// Example
// Enter a name: Homer
// Enter a name: Bart
// Enter a name: Maggie
// Enter a name: Lisa
// Enter a name: Moe
// Enter a name:
// The winner is... Maggie


import java.util.Scanner;

public class Main {
    public static void main(String args[]){

        Scanner scan = new Scanner(System.in);
        String[] simpsons = new String[30];
        double rand;
        int i=0;
        while(true) {
            System.out.print("Enter a name: ");
            simpsons[i] = scan.nextLine();
            i++;
            if(simpsons[i-1].equals(""))
                break;
        }
        rand = Math.random()%simpsons.length+1;

        System.out.println("The winner is... "+simpsons[(int)rand]);

    }
}
