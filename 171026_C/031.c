// 031 
// Resting Pulse: 65 Age:22
// Intensity	| Rate
// -------------|-----------
// 55%			| 138bpm

#include <stdio.h>
#include <stdlib.h>


int main() {
	int pulse, age;
	double targetHeartRate, intensity;

	printf("Resting pulse: ");
	scanf("%d", &pulse);
	printf("Age: ");
	scanf("%d", &age);
	printf("Intensity\t| Rate\n");
	printf("----------------|--------\n");
	


	for (intensity = 55; intensity <= 95; intensity += 5) {
		targetHeartRate = (((220 - age) - pulse)*intensity/100) + pulse;
		printf("%.0lf%%\t\t| %.0lfbpm\n", intensity, targetHeartRate);
	}

	system("pause");
	return 0;


}
