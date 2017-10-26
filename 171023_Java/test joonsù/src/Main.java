import java.util.Scanner;
import java.lang.String;
public class hw27 {
    public static void main(String[] args) {
        hw27 test = new hw27();
        Scanner scan = new Scanner(System.in);
        String[] text = {"First name", "Second name","ZIP code","Employee ID"};
        String[] answer = new String[4];
        String[] errorcode = {"Error with the name.\n","Error with the second name.\n","Error with ZIP code.\n","Error with the employee ID.\n"};
        int count = 0; int b = 0;
        while(count < 3){
            System.out.print("Enter the "+text[count]+" :");
            answer[count] = scan.next();
            count++;
        }
        System.out.print("Enter the "+text[count]+" :");
        answer[count] = scan.next();
        count = 0;
        while(b < 2) {
            if (answer[b].length() < 2 && !test.Isalpha(answer[b])) {
                System.out.print(errorcode[b]);
            }
            b++;
        }
        count = 0;
        char c;b = 0;
        while(count < answer[2].length()) {
            c = answer[2].charAt(count);
            if(!Character.isDigit(c)){
                b++;
            }

        }
        if(b > 0){
            System.out.print(errorcode[2]);
        }
        b = 0;
        if(answer[3].length() != 7){
            System.out.print(errorcode[4]);
        }
        else if(answer[3].charAt(2) == '-'){
            String[] arr = answer[3].split("-");
            if(test.Isalpha(arr[0])){
                count = 0 ;
                while(count<4){
                    c = arr[1].charAt(count);
                    if(!Character.isDigit(c)){
                        System.out.print(errorcode[4]);
                        b++;
                    }
                    count++;
                }
                if(b ==0){
                    System.out.print("There were no errors found");
                }
            }
            else{
                System.out.print(errorcode[4]);
            }
        }



    }
    public boolean Isalpha(String name){
        int a = 0;int b = 0;
        while(a < name.length()) {
            char c = name.charAt(a);
            if (!Character.isLetter(c)) {
                b++;
            }
            a++;
        }
        if(b > 0)
            return false;
        else
            return true;
    }


}
