#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n = 10;

	printf("Value of variable: %i\n", n);
	printf("Address of variable: %p\n", &n);
	printf("Value of address of variable: %i\n", *&n);

	return 0;
}