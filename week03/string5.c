#include <stdio.h>
#include <string.h>

#define STRING_LENGTH	50

int main(int argc, char const *argv[])
{	
	char name[STRING_LENGTH];	
	printf("What is your name? ");	
	/**************************************************
	* [] is the scanset character.
	* ^\n tells to take input until newline doesn't get encountered
	* %*c, tells to read the newline character and the * tells to discard the newline character
	**************************************************/
	scanf("%[^\n]%*c", name);
	printf("Hello %s! It's nice to meet you!\n", name);

	return 0;
}