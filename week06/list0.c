/*********************************************
 * Implements a list of numbers with fixed-size array
 *********************************************/
#include <stdio.h>

#define SIZE 	10

int main(int argc, char const *argv[])
{
	int list[SIZE];

	// initialize the list with numbers
	for(int i = 0; i < SIZE; i++)
	{
		list[i] = i;
	}


	// print list
	for(int i = 0; i < SIZE; i++)
	{
		printf("%i\n", list[i]);
	}


	return 0;
}