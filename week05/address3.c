#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s[] = "hello";

	printf("String: %s\n", s);
	printf("Actual content of string variable: %p\n", s);

	printf("Output addresses of array elements:\n");
	printf("\t%p\n", s);
	printf("\t%p\n", &s[0]);
	printf("\t%p\n", &s[1]);
	printf("\t%p\n", &s[2]);
	printf("\t%p\n", &s[3]);
	printf("\t%p\n", &s[4]);

	printf("Output contents of array elements:\n");
	printf("%5c\n", s[0]);
	printf("%5c\n", s[1]);
	printf("%5c\n", s[2]);
	printf("%5c\n", s[3]);
	printf("%5c\n", s[4]);

	printf("Output via pointer arithmetic:\n");
	printf("%5c\n", *s);
	printf("%5c\n", *(s + 1));
	printf("%5c\n", *(s + 2));
	printf("%5c\n", *(s + 3));
	printf("%5c\n", *(s + 4));

	return 0;
}