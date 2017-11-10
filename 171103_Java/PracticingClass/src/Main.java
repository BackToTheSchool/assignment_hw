import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int act, amount;
        String accNum, password, object;
        Account acc1 = new Account(1000000,"davkim1030");
        Account acc2 = new Account(10,"phirered2015");              // 기존 계좌들 미리 생성
        Account account;        // 계좌 검색용 인스턴스

        List<String> userPasswords = new ArrayList<>();             // 계좌 비밀 번호 배열
        List<String> userAccNums = new ArrayList<>();               // 계좌 번호 배열
        List<Account> userInst = new ArrayList<>();                 // 계좌 배열

        userPasswords.add(acc1.getPassword());                      // 각 배열에 기존 계좌들 추가
        userPasswords.add(acc2.getPassword());
        userAccNums.add(String.valueOf(acc1.getAccNum()));
        userAccNums.add(String.valueOf(acc2.getAccNum()));
        userInst.add(acc1);
        userInst.add(acc2);


        while(true) {
            /// 초기에 계좌생성, 은행 업무 중 어떤 것을 할지 선택하는 루프
            System.out.print("무엇을 하시겠습니까?\n 0. 계좌생성\n 1. 은행업무\n");
            act = scan.nextInt();
            if (act == 0)
                createAccount(userAccNums, userPasswords, userInst);
                /// 계좌 생성 선택시 메소드 호출
            else {
                /// 은행 업무 선택시 루프
                while (true) {
                    System.out.print("계좌번호를 입력하시오. ");
                    accNum = scan.next();
                    System.out.print("비밀번호를 입력하시오. ");
                    password = scan.next();


                    if (login(accNum, password, userAccNums, userPasswords) < userInst.size()) {
                        System.out.println("무엇을 하시겠습니까?\n 0. 잔고 확인\n 1. 입금\n 2. 출금\n 3. 송금\n 4. 로그아웃");
                        act = scan.nextInt();
                        account = userInst.get(login(accNum, password, userAccNums, userPasswords));    //login 메소드 인수의 정보를 갖는 account 객체 호출

                        switch (act) {
                            case 0:
                                System.out.println("잔   고: $" + account.getBalance());
                                break;
                            case 1:
                                System.out.print("얼마를 입급 하시겠습니까? ");
                                amount = scan.nextInt();
                                account.deposit(amount);
                                break;
                            case 2:
                                System.out.print("얼마를 출금 하시겠습니까? ");
                                amount = scan.nextInt();
                                account.withdraw(amount);
                                break;
                            case 3:
                                System.out.print("어디로 송금 하시겠습니까?(계좌번호) ");
                                object = scan.next();
                                if (checkAccNum(object, userAccNums) == -1) {
                                    System.out.println("없는 계좌번호입니다.");
                                    break;
                                } else {
                                    System.out.print("얼마를 송금 하시겠습니까? ");
                                    amount = scan.nextInt();
                                    account.sendMoney(userInst.get(checkAccNum(object, userAccNums)), amount);
                                    break;
                                }
                            case 4:
                                break;
                        }
                        break;

                    } else {
                        System.out.println("Wrong user information!");
                        break;
                    }
                }
            }
        }
    }

    private static int login(String accNum, String password, List<String> accNumList, List<String> passList) {
        /// 계좌번호와 비밀번호를 확인해서 맞으면 아이템 인덱스 번호를, 아니면 size() + 1 값을 리턴
        boolean accNumCheck = false, passwordCheck = false;
        int i, j;

        for (i = 0; i < accNumList.size(); i++) {
            if (accNum.equals(accNumList.get(i))) {
                accNumCheck = true;
                break;
            } else {
                accNumCheck = false;
            }
        }
        for (j = 0; j < passList.size(); j++) {
            if (password.equals(passList.get(j))) {
                passwordCheck = true;
                break;
            } else {
                passwordCheck = false;
            }
        }

        if(accNumCheck && passwordCheck && i == j)
            return i;
        else
            return accNumList.size() + 1;
    }

    private static int checkAccNum(String accNum, List<String> accList){
        /// 계좌 번호가 존재하는지 확인하는 메소드
        int i, j = 0;
        for(i = 0; i < accList.size(); i++){
            if(accNum.equals(accList.get(i)))
                break;
            else
                j++;
        }

        if(i == j)
            return i;
        else
            return -1;
    }

    private static void createAccount(List<String> accNumList, List<String> passList, List<Account> accList){
        /// 계좌 생성 메소드
        Scanner scan = new Scanner(System.in);
        User newUser = new User("","",0);

        String password;
        System.out.print("계좌 생성을 시작합니다. \n이름을 입력하세요. ");
        newUser.setName(scan.nextLine());
        System.out.print("성별을 입력하세요.(F/M) ");
        newUser.setSex(scan.nextLine());
        System.out.print("출생년도를 입력하세요. ");
        newUser.setYearOfBirth(scan.nextInt());
        System.out.print("비밀번호를 입력하세요. ");
        password = scan.next();

        Account newAcc = new Account(0,password);

        accNumList.add(String.valueOf(newAcc.getAccNum()));
        passList.add(password);
        accList.add(newAcc);
        newUser.addAccount(newAcc);

        System.out.println("계좌 생성이 완료 되었습니다!");
        System.out.println("계좌번호: " + newAcc.getAccNum() + "\n비밀번호: " + newAcc.getPassword() + "\n잔고: "+newAcc.getBalance());

    }
}
