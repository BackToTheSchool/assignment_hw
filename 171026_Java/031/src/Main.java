// 031
// Resting Pulse: 65 Age:22
// Intensity	| Rate
// -------------|-----------
// 55%			| 138bpm

import java.util.Scanner;

public class Main {
    public static void main(String args[]) {

        int pulse, age;
        double targetHeartRate, intensity;
        Scanner scan = new Scanner(System.in);

        System.out.print("Resting pulse: ");
        pulse = scan.nextInt();
        System.out.print("Age: ");
        age = scan.nextInt();
        System.out.print("Intensity\t| Rate\n");
        System.out.print("------------|------------\n");


        for (intensity = 55; intensity <= 95; intensity += 5) {
            targetHeartRate = (((220 - age) - pulse) * intensity / 100) + pulse;
            System.out.println(intensity+"%\t\t| "+targetHeartRate+"bpm");
        }
    }

}
