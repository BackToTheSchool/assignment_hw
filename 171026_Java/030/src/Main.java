// 030 0부터 12까지의 곱셈표를 만드는 프로그램


public class Main {
    public static void main(String args[]) {

        int a, b;
        for(a = 0; a < 13; a++) {
            for (b = 0; b < 13; b++) {
                System.out.print(a+"*"+b+"="+a*b+" ");
            }
            System.out.print("\n");
        }

    }

}
