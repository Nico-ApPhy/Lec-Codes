#include <stdio.h>

int main(int argc, char const *argv[])
{
	int quiz[15];

	quiz[0] = 90;
	quiz[1] = 80;
	quiz[2] = 90;
	quiz[3] = 100;
	quiz[4] = 89;
	quiz[5] = 75;
	quiz[6] = 79;
	quiz[7] = 79;
	quiz[8] = 20;
	quiz[9] = 69;
	quiz[10] = 91;
	quiz[11] = 95;
	quiz[12] = 92;
	quiz[13] = 98;
	quiz[14] = 90;

	int total = 0;
	for(int i = 0; i < 15; i++)
	{
		total += quiz[i];
	}

	float average = (float) total / 15;

	for(int i = 0; i < 15; i++)
	{
		printf("Quiz %d has grade %d.\n", i + 1, quiz[i]);
	}

	printf("The average is %.2f.\n", average);

	return 0;
}