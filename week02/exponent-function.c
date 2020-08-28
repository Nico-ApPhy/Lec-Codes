#include <stdio.h>

int power(int base, int exponent)
{
	int power = 1;	
	for(int counter = 1; counter <= exponent; counter++)
	{
		power *= base;
	}
	return power;
}

int main(int argc, char const *argv[])
{
	int base;
	int exponent;
	printf("Base: ");
	scanf("%i", &base);
	printf("Exponent: ");
	scanf("%i", &exponent);	
	printf("Power: %i\n", power(base, exponent));

	return 0;
}

