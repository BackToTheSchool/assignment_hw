// 036 통계 계산
// 웹사이트의 응답시간을 밀리초로 받는 프로그램을 작성하라.
// 사용자가 'done'이라고 입력할 때까지 응답시간을 받는다.
// 그 다음 평균 응답시간, 최소 응답시간, 최대 응답시간, 표준편차를 출력하자.
// 평균 값을 구하는 방법은 다음과 같다.

// Example
// Enter a number: 100
// Enter a number: 200
// Enter a number: 1000
// Enter a number: 300
// Enter a number: done
// Numbers: 100, 200, 1000, 300
// The average is 400.
// The min is 100.
// The max is 1000.
// The standard deviation is 400.25.

import java.util.Scanner;

public class Main {
    public static void main(String args[]){

        Scanner scan = new Scanner(System.in);
        String[] numbers = new String[30];
        Double[] forAve = new Double[30];
        String temp;
        int sum=0, min, max, average, c=0;
        double standardDeviation;

        int i=0;
        while(true) {
            System.out.print("Enter a number: ");
            temp = scan.nextLine();
            i++; c++;
            if(temp.equals("done")){
                c--;
                break;}
            numbers[i-1]=temp;
        }

        System.out.print("Numbers: ");
        for(i=0;i<c;i++){
            sum = sum + Integer.parseInt(numbers[i]);
            System.out.print(numbers[i]+", ");
        }
        average = sum/c;


        min=Integer.parseInt(numbers[0]);
        max=Integer.parseInt(numbers[0]);
        for(i=0;i<c-1;i++){
            min=Math.min(Integer.parseInt(numbers[i+1]),min);
            max=Math.max(Integer.parseInt(numbers[i+1]),max);
        }

        sum=0;
        for(i=0;i<c;i++){
            forAve[i]=Double.parseDouble(numbers[i])-average;
            forAve[i]=Math.pow(forAve[i],2);
            sum=(int)(sum+forAve[i]);
        }

        standardDeviation = Math.sqrt(sum/c);




        System.out.println("\nThe average is "+average);
        System.out.println("The min is "+min);
        System.out.println("The max is "+max);
        System.out.println("The standard deviation is "+standardDeviation);

    }
}
