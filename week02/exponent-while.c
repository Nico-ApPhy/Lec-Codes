#include <stdio.h>

int main(int argc, char const *argv[])
{
	int base;
	int exponent;
	printf("Base: ");
	scanf("%i", &base);
	printf("Exponent: ");
	scanf("%i", &exponent);

	int power = 1;
	int counter = 1;
	while ( counter <= exponent)
	{
        power = power * base;
        counter = counter + 1;
	}
	printf("Power: %i\n", power);

	return 0;
}