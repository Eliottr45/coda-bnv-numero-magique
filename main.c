#include <stdlib.h>
#include <stdio.h>
#include <time.h>

	int main()
{
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int guess;
	printf("Choisissez un nombre entre 1 et 100 : \n");
	scanf("%d", &guess);
	while(guess != random_number)
	{
		if(guess < random_number)
		{
			printf("C'est plus !\n");
			printf("Choisissez un nombre entre 1 et 100 : \n");
			scanf("%d", &guess);
		}
		else
		{
			printf("C'est moins !\n");
			printf("Choisissez un nombre entre 1 et 100 : \n");
			scanf("%d", &guess);
		}
	}
	printf("Gagné !\n");
	exit(0);
}
