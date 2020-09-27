#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[] = "Happy";
	char s2[] = "Birthday!";
	char s3[] = "Happy";
 
	if (strcmp(s1, s2) == 0)
	{
		printf("s1 and s2 have the same content\n");
	}
	else
	{
		printf("s1 and s2 don't have the same content\n");
	}

	if (strcmp(s1, s3) == 0)
	{
		printf("s1 and s3 have the same content\n");
	}
	else
	{
		printf("s1 and s3 don't have the same content\n");
	}

	if (strcmp(s1, s2) > 0)
	{
		printf("s1 comes after s2\n");
	}
	else
	{
		printf("s1 comes before s2\n");
	}
	
	return 0;
}