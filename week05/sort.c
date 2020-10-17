#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_SIZE	10

void print(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if ((i % 5) == 0)
		{
			printf("\n");
		}
		printf("%i, ", a[i]);
	}
}

void insertionSort(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int j = i - 1;
		int key = a[i];
		while((j >= 0) && (a[j] > key))
		{
			a[j + 1] = a[j];
			j--;
		}	
		a[j + 1] = key;
	}
}

void swapByValue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swapByReference(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int a[ARRAY_SIZE];

	srand(time(0));
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		a[i] = rand() % 1000;
	}	

	printf("Before sorting:");
	print(a, ARRAY_SIZE);
	insertionSort(a, ARRAY_SIZE);
	printf("\n\nAfter sorting:");
	print(a, ARRAY_SIZE);
	printf("\n");

	printf("\n\nSwap by value:\n");
	printf("a[0] = %i, a[n - 1] = %i\n", a[0], a[ARRAY_SIZE - 1]);
	swapByValue(a[0], a[ARRAY_SIZE - 1]);
	printf("a[0] = %i, a[n - 1] = %i\n", a[0], a[ARRAY_SIZE - 1]);

	printf("\n\nSwap by reference:\n");
	printf("a[0] = %i, a[n - 1] = %i\n", a[0], a[ARRAY_SIZE - 1]);
	swapByReference(&a[0], &a[ARRAY_SIZE - 1]);
	printf("a[0] = %i, a[n - 1] = %i\n", a[0], a[ARRAY_SIZE - 1]);

	return 0;
}