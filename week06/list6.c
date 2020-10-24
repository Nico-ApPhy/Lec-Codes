/*********************************************************
 * Implement a sorted list of numbers
 ********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node
{
	int number;
	struct Node *next;
} Node;

void displayList(Node *list)
{
	Node *current = list;

	while(current != NULL)
	{
		printf("%i ", current->number);
		current = current->next;
	}
}

void deleteList(Node **list)
{
	while(*list != NULL)
	{
		Node *tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
}

void insertSorted(Node **list, int key)
{
	Node *n = malloc(sizeof(Node));
	n->number = key;
	n->next = NULL;

	if (*list == NULL)
	{
		*list = n;
	}
	else
	{
		Node *current = *list;
		Node *previous = NULL;

		while(current != NULL && current->number < n->number)
		{
			previous = current;
			current = current->next;
		}
		n->next = current;

		if (previous == NULL)
		{
			*list = n;
		}
		else
		{
			previous->next = n;
		}
	}
}

int main(int argc, char const *argv[])
{
	Node *list = NULL;

	srand(time(NULL));

	printf("Inserting random keys...\n");
	for(int i = 0; i < 10; i++)
	{
		int number = rand() % 100;
		printf("Insert %i\n", number);
		insertSorted(&list, number);
	}
	printf("List content: ");
	displayList(list);
	printf("\n");

	deleteList(&list);

	return 0;
}