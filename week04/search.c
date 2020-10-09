#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE	10000
#define NOT_FOUND 	-1

int linearSearch(int a[], int size, int key)
{
	for(int i = 0; i < size; i++)
	{
		if (a[i] == key)
		{
			return i;
		}
	}

	return NOT_FOUND;
}

int binarySearch(int a[], int size, int key)
{
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == key)
		{
			return mid;
		}
		else if (key > a[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return NOT_FOUND;
}

int main(int argc, char const *argv[])
{
	int a[ARRAY_SIZE];
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		a[i] = i * 2;
	}

	int key = 1999;

	clock_t start = clock();

	//int location = linearSearch(a, ARRAY_SIZE, key);
	int location = binarySearch(a, ARRAY_SIZE, key);

	clock_t end = clock();

	double time = (double) (end - start);

	printf("%i found in location %i. Time used: %f\n", key, location, time);
	return 0;
}