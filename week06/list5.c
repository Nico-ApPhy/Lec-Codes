/**************************************************************
 * Implement a list of numbers where user can indicate if he
 * wants to insert a key at the start or end of the list.
 * Deleting of a key is also suported
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>

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

void insertAtStart(Node **list, int key)
{
	Node *n = malloc(sizeof(Node));
	n->number = key;
	n->next = *list;
	*list = n;
}

void insertAtEnd(Node **list, int key)
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
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = n;
	}
}

void deleteKey(Node **list, int key)
{
	Node *current = *list;
	Node *previous = NULL;

	while(current != NULL && current->number != key)
	{
		previous = current;
		current = current->next;
	}

	if (current != NULL)
	{
		if (previous == NULL)
		{
			*list = current->next;
		}
		else
		{
			previous->next = current->next;
		}
		free(current);
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

int main(int argc, char const *argv[])
{
	Node *list = NULL;

	printf("Inserting at the front...\n");
	for(int i = 0; i < 10; i++)
	{
		printf("Insert %i at the front\n", 2 * i);
		insertAtStart(&list, 2 * i);

	}
	printf("List content: ");
	displayList(list);
	printf("\n");

	printf("\nDeleting number 0, 14, 18...\n");
	deleteKey(&list, 0);
	deleteKey(&list, 14);
	deleteKey(&list, 18);
	printf("List content: ");
	displayList(list);
	printf("\n");

	printf("\nDeleting list...\n");
	deleteList(&list);
	printf("List content: ");
	displayList(list);
	printf("\n");

	printf("\nInserting at the back...\n");
	for(int i = 10; i < 20; i++)
	{
		printf("Insert %i at the back\n", 2 * i);
		insertAtEnd(&list, 2 * i);
	}
	printf("List content: ");
	displayList(list);
	printf("\n");

	deleteList(&list);

	return 0;
}