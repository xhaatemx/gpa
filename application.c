#include <stdio.h>
#include <time.h>


void sleep(int seconds);
int main(int argc, char *argv[])
{
	printf("\n---- Notice that: this Progaram is GPA for Correctness & style\n");
	printf("	notice that: Style Grade Must be in range(1 - 5) \n");
	printf("   notice that number of Correct points must be less than total points-------\n\n");

	int N, finalGrade;

	printf("Enter Final Grade~# ");
	scanf("%i", &finalGrade);
	printf("Enter Number of Questions~# ");
	scanf("%i", &N);

	// Calulate the Grade for each Question
	float Grade[N];
	float total = 0, correctness, points, cpoint, style;
	const float Question_Grade = finalGrade / N;

	sleep(2);
	printf("\n");

	for (int i = 0; i < N; ++i)
	{
		printf("Question N[%i]\n", i + 1);
		sleep(1);
		printf("--------------\n");

		// calculate the correctness side
		do {
			printf("Number of Correct-Points~# ");
			scanf("%i", &cpoint);
			printf("Number of Points~# ");
			scanf("%i", &points);
		} while (cpoint > points);
		correctness = cpoint / points;

		// calculate the style side
		do{
			printf("StyleSheet Grade ~# ");
			scanf("%f", &style);
		}while(style > 5);

		// calculate Grade[i]
		Grade[i] = Question_Grade * ((2 * correctness / 3) + (style / 15));
		total += Grade[i];

		printf("\n----------------------------\n");
		printf("Question N[%i] Grade is %.2f\n", i + 1, Grade[i]);
		printf("----------------------------\n");


		sleep(1);
		printf("\n");
	}

	printf("-----------------------------------------------------------\n");
	printf("Your Final Grade %.2f with a Persentage %.2f\n", total, total * 100 / finalGrade);
	printf("-----------------------------------------------------------\n");
	return 0;
}

void sleep(int seconds) 
{ 
    // Converting time into milli_seconds 
    int totalSec = 1000 * seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + totalSec); 
} 