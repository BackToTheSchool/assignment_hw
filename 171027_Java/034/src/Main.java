// 034 사원 명단 삭제
// 사원 명단이 들어있는 프로그램을 작성하라.
// 프로그램이 실행되면 리스트 안에 있는 모든 사원들의
// 이름을 출력한 다음, 명단에서 삭제할 이름을 입력받고
// 해당하는 이름을 제거한다.
// 그리고는 나머지 명단을 한 줄씩 출력한다.

import java.util.Scanner;

public class Main {
    public static void main(String args[]){

        Scanner scan = new Scanner(System.in);
        String[] employeeList;
        String delName;
        employeeList= new String[]{"John Smith", "Jackie Jackson",
        "Chris Jones", "Amanda Cullen", "Jeremy Goodwin"};

        System.out.println("There are "+employeeList.length+" employees:");
        for (String anEmployeeList : employeeList) {
            System.out.println(anEmployeeList);
        }
        System.out.print("Enter an employee name to remove: ");
        delName = scan.nextLine();

        for(int i=0; i<employeeList.length;i++) {
            if (employeeList[i].equals(delName)) {
                for(; i<employeeList.length-1;i++)
                employeeList[i] = employeeList[i + 1];
            }
        }

        employeeList[employeeList.length-1]="";

        for (String anEmployeeList : employeeList) {
            System.out.println(anEmployeeList);
        }

    }
}
