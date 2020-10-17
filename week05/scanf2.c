// Incorrectly gets a string from user using scanf! Dangerous!

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *s;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}