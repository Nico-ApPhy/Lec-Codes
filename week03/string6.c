#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[] = "Happy ";
	char s2[] = "Birthday!";
	char s3[50];

	strcpy(s3, s1);
	printf("%s\n", s3);

	strcat(s3, s2);
	printf("s3: %s\n", s3);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	
	return 0;
}