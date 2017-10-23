// 008 피자 파티
// 피자를 정학하게 나누는 프로그램을 작성하라.
// 사람수, 피자 개수, 조각 개수를 입력 받는데, 이때 조각 개수는 짝수여야 한다.
// 일단 한 사람이 받게 되는 피자 조각 개수를 출력해보자.
// 만일 남는 조각이 있다면 그 개수도 나타내보자.

// Example
// How many people? 8
// How many pizzas do you have? 2

// How many pieces are in a pizza? 8
// 8 people with 2 pizzas
// Each person gets 2 pieces of pizza.
// There are 0 leftover pieces.




import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int people, pizza, piece;


        System.out.print("How many people? ");
        people = scan.nextInt();
        System.out.print("How many pizzas do you have? ");
        pizza = scan.nextInt();
        System.out.print("\nHow many pieces are in a pizza? ");
        piece = scan.nextInt();

        System.out.print(people+" people with "+pizza+" pizzas\n" +
                "Each person gets "+((pizza*piece)/people)+" pieces of pizza.\n" +
                "There are "+((pizza*piece)%people)+" leftover pieces");

    }

}
