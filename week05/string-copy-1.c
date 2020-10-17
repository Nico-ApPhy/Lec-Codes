#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_SIZE	50

int main(int argc, char const *argv[])
{
	char s[MAX_STRING_SIZE];

	printf("s: ");
	scanf("%s", s);

	char *t = s;

	// Suppose to capitalize the first letter of the copy of string
	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("s: %s\n", s);
	printf("t: %s\n", t);

	return 0;
}