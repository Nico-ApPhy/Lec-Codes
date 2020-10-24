/*****************************************************
 * Implements a list of numbers with dynamic-sized array
 * using realloc
 *****************************************************/
#include <stdio.h>
#include <stdlib.h>

#define	SIZE 	10

int main(int argc, char const *argv[])
{
	// Dynamically allocate a list
	int *list = malloc(SIZE * sizeof(int));
	if (list == NULL)
	{
		return 1;
	}

	// initialize the list with numbers
	for(int i = 0; i < SIZE; i++)
	{
		list[i] = i;
	}

	// display the list
	printf("List contents:\n");
	for(int i = 0; i < SIZE; i++)
	{
		printf("%i\n", list[i]);
	}

	printf("Resizing the list...\n\n");

	// Dynamically allocate a larger list
	int *tmp = realloc(list, 2 * SIZE * sizeof(int));
	if (tmp == NULL)
	{
		return 1;
	}

	// Mark the newly allocated list as the list
	list = tmp;

	// Add new contents to the additional spaces of the new list
	for(int i = SIZE; i < 2 * SIZE; i++)
	{
		list[i] = i;
	}

	// display the list with the added contents
	printf("List contents:\n");
	for(int i = 0; i < 2 * SIZE; i++)
	{
		printf("%i\n", list[i]);
	}

	// Free list
	free(list);

	return 0;
}