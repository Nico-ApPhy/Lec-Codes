#include <stdio.h>

int main(int argc, char const *argv[])
{
	char choice;		
	do
	{
		int number1, number2;

		printf("Input 1st number: ");
		scanf("%i", &number1);
		printf("Input 2nd number: ");
		scanf("%i", &number2);

		int option;
		printf("What operation do you want?\n");
		printf("   1. Add\n");
		printf("   2. Subtract\n");
		printf("   3. Multiply\n");
		printf("   4. Divide\n");
		printf("   5. Modulo\n");
		printf("Option: ");
		scanf("%i", &option);

		int answer = 0;
		if (option == 1 || option == 2 || option == 3 || 
			option == 4 || option == 5)
		{
			switch (option)
			{
				case 1:
					answer = number1 + number2;
					break;
				case 2:
					answer = number1 - number2;		
					break;
				case 3: 
					answer = number1 * number2;
					break;
				case 4:
					answer = number1 / number2;
					break;
				case 5:
					answer = number1 % number2;
					break;			
			}		
			printf("Answer is %i.\n", answer);
		}
		else
		{	
			printf("Invalid option entered!\n");
		}	
		
		printf("Continue (y/n)?:");		
		scanf(" %c", &choice);			
	}while((choice == 'y') || (choice == 'Y') );

	return 0;
}