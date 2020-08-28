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
	for(int counter = 1; counter <= exponent; counter++)
	{
		power *= base;
	}
	printf("Power: %i\n", power);

	return 0;
}