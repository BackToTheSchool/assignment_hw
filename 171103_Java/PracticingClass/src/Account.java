public class Account {

    private int balance, interest;
    private String password;
    final static double fee = 0.01;     // 송금, 출금 수수료

    public Account(int balance, int interest, String password){     // 생성자
        this.balance=balance;       // 잔고
        this.interest=interest;     // 이율
        this.password = password;   // 비밀번호
    }

    public void sendMoney(Account accName, int amount, String password){        // 송금 메소드
        if(password.equals(this.password)){             // 패스워드 확인
            if(amount<=0){      // 거래량이 0보다 작은 경우 에러메시지 출력
                errorMessage(0);
            }else{
                balance -= amount * (1 + fee);      // 수수료 포함해서 송금
                accName.balance += amount;          // 목적 계좌에 송금
                printTransactionResult(0, amount);  // 결과 출력
            }
        } else
            errorMessage(2);                // 패스워드가 틀릴 경우 에러메시지
    }
    public void withdraw(int amount, String password){  /// 출금 메소드

        if(password.equals(this.password)){

            if(amount<=0||amount*(1+fee)>this.balance){          // 거래량이 0보다 작거나 거래하면 잔고가 0미만일 경우
                errorMessage(0);
            }else {
                balance -= amount * (1 + fee);              // 수수료 포함하여 출금
                printTransactionResult(1, amount);

            }
        }else
            errorMessage(2);

    }
    public void deposit(int amount, String password){   /// 입금 메소드
        if(password.equals(this.password)) {

            if (amount <= 0||amount*(1+fee)>this.balance) {
                errorMessage(0);
            } else {
                balance = balance + amount;
                printTransactionResult(2, amount);
            }
        } else
            errorMessage(2);
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
                System.out.println("수 수  료: "+amount*fee);
            System.out.println("잔    고: " + this.balance);
        }else
            System.out.println("type error");
    }

    public int getBalance() {   // 잔고 출력
        return balance;
    }

}
