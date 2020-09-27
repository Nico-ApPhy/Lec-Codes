#include <stdio.h>

#define SIZE	15

int main(int argc, char const *argv[])
{
	int quiz[SIZE] = {90, 80, 90, 100, 89, 75, 79, 79, 20, 69, 91, 95, 92, 98, 90};

	int total = 0;	
	for(int i = 0; i < SIZE; i++)
	{
		total += quiz[i];
	}

	float average = (float) total / SIZE;

	for(int i = 0; i < SIZE; i++)
	{
		printf("Quiz %d has grade %d.\n", i + 1, quiz[i]);
	}

	printf("The average is %.2f.\n", average);

	return 0;
}