// 038 필터링 값
// 숫자 리스트를 입력 받고 공백글자로 나누어 저장한 다음
// 이 중에서 짝수만 들어 있는 새로운 배열을 만들어
// 출력하는 프로그램을 작성하라.

// Example
// Enter a list of numbers seperated by space: 1 2 3 4 5 6
// The even numbers are 2 4 6

import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String args[]){

        Scanner scan = new Scanner(System.in);
        Main filter = new Main();
        String ip;
        int[] list = new int[30];
        int[] listIn = new int[30];
        int i;

        System.out.print("Enter a list of numbers seperated by spaces: ");
        ip=scan.nextLine();



        listIn = filter.filterEvenNumber(ip);
        for(i=0;listIn[i]!=0;i++)
        System.out.print(listIn[i]+" ");
    }

    private int[] filterEvenNumber(String ip){
        int i, temp;
        int[] op = new int[30];
        int[] out = new int[30];
        StringTokenizer st = new StringTokenizer(ip);
        temp = Integer.parseInt(st.nextToken());
        for(i=0;temp!=0;i++){

            op[i] =temp;
        }

        int c=0;
        for(i=0;op[i]!=0;i++){
            if(op[i]%2==0) {
                out[c] = op[i];
                c++;
            }

        }

        return out;
    }

}
