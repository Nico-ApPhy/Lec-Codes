#include <stdio.h>
#include <string.h>

#define MAX		50

int main(int argc, char const *argv[])
{
	char name[MAX];

	printf("What is your name?: ");
	scanf("%s", name);
	printf("Oh, hi %s!\n", name);
	
	return 0;
}