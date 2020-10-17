/************************************************************
 * Capitalizes the first letter of the copy of a string
 * using strcpy and without memory leak
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
	if (t == NULL)
	{
		return 1;
	}	

	// Copy string into allocated memory
	strcpy(t, s);
	
	// Capitalize the first letter of the copy of string
	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("s: %s\n", s);
	printf("t: %s\n", t);

	// Free memory
	free(t);

	return 0;
}