#include <stdio.h>

int main(int argc, char const *argv[])
{
	int quiz[15] = {90, 80, 90, 100, 89, 75, 79, 79, 20, 69, 91, 95, 92, 98, 90};

	int total = 0;
	quiz[15] = 100;
	quiz[200] = 100;
	for(int i = 0; i < 16; i++)
	{
		total += quiz[i];
	}

	float average = (float) total / 16;

	for(int i = 0; i < 16; i++)
	{
		printf("Quiz %d has grade %d.\n", i + 1, quiz[i]);
	}

	printf("The average is %.2f.\n", average);

	return 0;
}