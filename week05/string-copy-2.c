/************************************************************
 * Capitalizes the first letter of the copy of a string
 ***********************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STRING_SIZE	50

int main(int argc, char const *argv[])
{
	char s[MAX_STRING_SIZE];

	printf("s: ");
	scanf("%s", s);

	// Allocate memory for another string
	char *t = malloc(strlen(s) + 1);

	// Copy string into allocated memory
	for(int i = 0; i <= strlen(s); i++)
	{
		t[i] = s[i];
	}

	// Capitalize the first letter of the copy of string
	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("s: %s\n", s);
	printf("t: %s\n", t);

	return 0;
}