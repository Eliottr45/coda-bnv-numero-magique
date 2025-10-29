// Eliot Tourtelier B1-b

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

	int main()
{
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int guess;
	printf("%d\n", random_number);
	while(guess != random_number)
	{
		printf("Choisissez un nombre entre 1 et 100 : \n");
		scanf("%d", &guess);
		if(guess <= 101 && guess >= 0 )
		{
			if(guess < random_number)
			{
				printf("C'est plus que %d !\n", guess);
			}
			else if (guess > random_number)
			{
				printf("C'est moins que %d !\n", guess);
			}
		}
		else 
		{
			printf("Saisi incorrect\n");
		}
	}
	printf("Gagné !\nLe nombre était bien %d\n", guess);
	char rejouer[10];
	printf("Voulez-vous rejouer ?\n Y/N:\n");
	getchar();
	scanf("%9s", rejouer);
	if(strcmp(rejouer, "y") == 0 || strcmp(rejouer, "Y") == 0 || strcmp(rejouer,"yes") == 0 || strcmp(rejouer, "oui") == 0)
	{
		return main();
	}
	exit(0);
}
