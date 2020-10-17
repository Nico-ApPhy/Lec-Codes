#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n = 10;
	int *pPtr = &n;

	printf("Value of pointer: %p\n", pPtr);
	printf("Value of address pointed by pointer: %i\n", *pPtr);

	return 0;
}