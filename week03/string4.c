#include <stdio.h>
#include <string.h>

#define STRING_LENGTH	50

int main(int argc, char const *argv[])
{	
	char name[STRING_LENGTH];	
	printf("What is your name? ");	
	fgets(name, STRING_LENGTH, stdin);
	printf("Hello %s! It's nice to meet you!\n", name);

	return 0;
}