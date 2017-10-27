// 022 숫자 비교
// 세 개의 숫자를 입력 받은 다음,
// 먼저 세 개의 숫자가 다른지를 확인하여
// 같은숫자가 있다면 프로그램을 종료시키고,
// 그렇지 않은 경우에는 입력한 세 개의 숫자 중
// 가장 큰 수를 출력 시키는 프로그램을 작성하라.

// Example
// Enter the first number: 1
// Enter the second number: 51
// Enter the third number: 2
// The largest number is 51

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int item[]=new int[3];
        int i;
        Scanner scan = new Scanner(System.in);

        for(i=0;i<3;i++){
            System.out.print("Enter the number "+i+1+": ");
            item[i]= scan.nextInt();
        }

        for(i=0;i<2;i++){
            if(item[i]-item[i+1]>0)
                item[i+1]=item[i];
        }

        System.out.println("The largest number is "+item[2]);


    }
}
