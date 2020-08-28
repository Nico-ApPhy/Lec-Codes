#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number1 = 0;
	int number2 = 0;

	printf("Input 1st number: ");
	scanf("%i", &number1);
	printf("Input 2nd number: ");
	scanf("%i", &number2);

	int sum = number1 + number2;	
	printf("%i + %i = %i\n", number1, number2, sum);

	int diff = number1 - number2;
	printf("%i - %i = %i\n", number1, number2, diff);

	int product = number1 * number2;
	printf("%i * %i = %i\n", number1, number2, product);

	int quotient = number1 / number2;
	printf("%i / %i = %i\n", number1, number2, quotient);

	int remainder = number1 % number2;
	printf("%i %% %i = %i\n", number1, number2, remainder);

	double divisionAnswer = (double) number1 / number2;
	printf("(With decimal place) %i / %i = %f\n", number1, number2, divisionAnswer);

	return 0;
}