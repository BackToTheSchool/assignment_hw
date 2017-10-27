//028


import java.util.Scanner;

public class Main {
    public static void main(String args[]){

        int[] item = new int[5]a;
        int i, sum;
        Scanner scan = new Scanner(System.in);

        for(i = 0; i < 5; i++) {
            System.out.print("Enter the number " + (i+1) + ": ");
            item[i]=scan.nextInt();
        }

        sum = 0;

        for (i = 0; i < 5; i++) {
            sum = sum + item[i];
        }

        System.out.println("The total is "+sum);

    }
}
