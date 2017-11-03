import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        Account acc1 = new Account(1000000, 12, "davkim1030");
        int act, amount;
        Account obj = new Account(10, 11, "phirered2015");
        String object, password;


        while (true) {
            System.out.println("무엇을 하시겠습니까?\n 1. 입금\n 2. 출금\n 3. 송금");
            act = scan.nextInt();

            System.out.print("비밀번호를 입력하시오. ");
            password = scan.next();

            switch (act) {
                case 1:
                    System.out.print("얼마를 입급 하시겠습니까?");
                    amount = scan.nextInt();
                    acc1.deposit(amount, password);
                    break;
                case 2:
                    System.out.print("얼마를 출금 하시겠습니까?");
                    amount = scan.nextInt();
                    acc1.withdraw(amount, password);
                    break;
                case 3:
                    System.out.print("어디로 송금 하시겠습니까?");
                    object = scan.next();                   // 아직 송금은 어디로 보낼지는 구현 못 함
                    System.out.print("얼마를 송금 하시겠습니까?");
                    amount = scan.nextInt();
                    acc1.sendMoney(obj, amount, password);
                    break;
                case 4:
                    System.out.println(obj.getBalance());
            }
        }
    }
}
