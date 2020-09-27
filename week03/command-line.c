#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Total no. of arguments: %i\n", argc);
	printf("Arguments:\n");
	for(int i = 0; i < argc; i++)
	{
		printf("  %s\n", argv[i]);
	}

	return 0;
}