#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	printf("Enter a number: ");
	scanf("%i", &x);
	printf("%i\n", x);

	char name[10];
	printf("Enter a string: ");
	scanf("%s", name);
	printf("%s\n", name);

	return 0;
}