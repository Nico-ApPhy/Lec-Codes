#include <stdio.h>

#define SIZE	20

int main(int argc, char const *argv[])
{
	int quiz[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		printf("Input score for quiz %i: ", i + 1);
		scanf("%i", &quiz[i]);
	}

	int total = 0;	
	for(int i = 0; i < SIZE; i++)
	{
		total += quiz[i];
	}

	float average = (float) total / SIZE;

	for(int i = 0; i < SIZE; i++)
	{
		printf("Quiz %i has grade %i.\n", i + 1, quiz[i]);
	}

	printf("The average is %.2f.\n", average);

	return 0;
}