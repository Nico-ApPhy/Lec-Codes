#include <stdio.h>

int main(int argc, char const *argv[])
{
	int age;
	printf("How old are you?: ");
	scanf("%i", &age);
	printf("5 years from now, your age will be %i.\n", age + 5);
	return 0;
}