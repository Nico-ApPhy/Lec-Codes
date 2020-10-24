/****************************************************************
 * Implement a list of numbers with linked list
 ***************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int number;
	struct Node *next;
} Node;

int main(int argc, char const *argv[])
{
	// List of size 0
	Node *list = NULL;

	// Add number to list
	Node *n = malloc(sizeof(Node));
	if (n == NULL)
	{
		return 1;	
	}
	n->number = 1;
	n->next = NULL;
	list = n;

	// Add another number to list
	n = malloc(sizeof(Node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 2;
	n->next = NULL;
	list->next = n;

	// Add yet another number to list
	n = malloc(sizeof(Node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 3;
	n->next = NULL;
	list->next->next = n;

	// Print list	
	for(Node *tmp = list; tmp != NULL; tmp = tmp->next)
	{
		printf("%i\n", tmp->number);
	}

	// Free list
	while(list != NULL)
	{
		Node *tmp = list->next;
		free(list);
		list = tmp;
	}

	return 0;
}