
public class Account {

    private int balance;
    private final int accNum;
    private String password;
    final static double fee = 0.01;     // 송금, 출금 수수료
    private static int accNumCounter = 1000;

    public Account(int balance, String password){     // 생성자
        this.balance = balance;         // 잔고
        this.password = password;       // 비밀 번호
        this.accNum = accNumCounter + 1;           // 계좌 번호
        accNumCounter++;
    }

//    public void createAccount(){
//        String password;
//        System.out.print("비밀번호를 입력하세요. ");
//        password = scan.next();
//        Account newAcc = new Account(0,password);
//
//        System.out.println("계좌 생성이 완료 되었습니다!");
//        System.out.println("계좌번호: " + newAcc.getAccNum() + "\n비밀번호: " + newAcc.getPassword() + "잔고: "+newAcc.getBalance());
//
//    }

    public void sendMoney(Account accName, int amount){        // 송금 메소드
            if(amount <= 0){      // 거래량이 0보다 작은 경우 에러메시지 출력
                errorMessage(0);
            } else if(amount * (1 + fee) > this.balance) {
                errorMessage(3);
            } else {
                balance -= amount * (1 + fee);      // 수수료 포함해서 송금
                accName.balance += amount;          // 목적 계좌에 송금
                printTransactionResult(0, amount);  // 결과 출력
            }
    }

    public void withdraw(int amount){  /// 출금 메소드
            if(amount <= 0){          // 거래량이 0보다 작거나 거래하면 잔고가 0미만일 경우
                errorMessage(0);
            } else if(amount * (1 + fee) > this.balance) {
                errorMessage(3);
            } else {
                balance -= amount * (1 + fee);              // 수수료 포함하여 출금
                printTransactionResult(1, amount);

            }

    }
    public void deposit(int amount){   /// 입금 메소드

            if (amount <= 0) {
                errorMessage(0);
            } else {
                balance = balance + amount;
                printTransactionResult(2, amount);
            }
    }

    public void errorMessage(int errorCase){    /// 에러메시지 출력 메소드
        switch(errorCase){
            case 0:
                System.out.println("0이하의 돈을 보낼 수 없습니다.");
                break;
            case 1:
                System.out.println("잔고보다 많은 돈을 꺼낼 순 없습니다.\n잔고: "+this.balance);
                break;
            case 2:
                System.out.println("비밀번호가 일치하지 않습니다.");
                break;
            case 3:
                System.out.println("잔고가 부족합니다.");
                break;
        }
    }

    private void printTransactionResult(int type, int amount){   /// 거래내역 출력 메소드
        String transType;
        switch(type) {
            case 0:
                transType = "송금";
                break;
            case 1:
                transType = "출금";
                break;
            case 2:
                transType = "입금";
                break;
            default:
                transType="error";
        }
        if(!transType.equals("error")) {
            System.out.println("거래 종류: " + transType + "\n거래 금액: $" + amount);
            if((type==0)||(type==1))
                System.out.println("수 수  료: $"+amount*fee);
            System.out.println("잔    고: $" + this.balance);
        }else
            System.out.println("type error");
    }

    public int getBalance() {   // 잔고 출력
        return balance;
    }

    public int getAccNum(){ return accNum;}

    public String getPassword(){ return password; }

}
