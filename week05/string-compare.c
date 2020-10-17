#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[] = "hello";
	char s2[] = "hello";

	printf("First comparison: ");
	if (s1 == s2)
	{
		printf("Same\n");
	}
	else
	{
		printf("Different\n");
	}

	printf("Second comparison: ");
	if (strcmp(s1, s2) == 0)
	{
		printf("Same\n");
	}
	else
	{
		printf("Different\n");
	}

	return 0;
}