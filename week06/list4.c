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

	for(int i = 0; i < 10; i++)
	{
		Node *n = malloc(sizeof(Node));
		n->number = i;
		n->next = NULL;

		if (list == NULL)
		{
			list = n;
		}
		else
		{
			Node *tmp = list;
			while(tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = n;
		}
	}	

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