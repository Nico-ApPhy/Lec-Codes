#include <stdio.h>
#include <string.h>

#define STRING_LENGTH	10

int main(int argc, char const *argv[])
{
	/*char string1[STRING_LENGTH];	
	printf("Enter string: ");
	scanf("%s", string1);
	printf("Your input is %s with length %lu\n", string1, strlen(string1));			
	*/

	// Safer method of getting string input	
	char string2[STRING_LENGTH];	
	printf("Enter string: ");	
	fgets(string2, STRING_LENGTH, stdin);
	printf("Your input is %s with length %lu\n", string2, strlen(string2));		

	return 0;
}