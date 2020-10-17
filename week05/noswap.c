/***************************************************************
 * Swap fails!!!
 **************************************************************/
#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main(int argc, char const *argv[])
{
	int x = 1; 
	int y = 2;

	printf("Before swapping: x = %i, y = %i\n", x, y);
	swap(x, y);
	printf("After swapping: x = %i, y = %i\n", x, y);

	return 0;
}