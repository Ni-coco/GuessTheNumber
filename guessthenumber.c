#include <stdlib.h>
#include <stdio.h>

int main() {
	int choix = 0;
	int points = 0;

	do {
		int nbre = 0;
		int nbrec = 0;
		srand(rand());
		nbre = rand() % 51;
		printf("Bienvenue dans le jeu de Guess The Number.\n");

		do {

			printf("Quel est le numero mystere?\n");
			scanf("%d", &nbrec);

			if (nbrec < nbre)
				printf("Le nombre mystere est plus grand\n");
			else if (nbrec > nbre)
				printf("Le nombre mystere est plus petit\n");
			else if (nbrec == nbre) {
				printf("Bravo, vous avez trouve le nombre mystere\n");
				points++;
			}
		} while (nbrec != nbre);

		printf("Voulez-vous rejouer?\n1. = Oui\n2. = Non\n");
		scanf("%d", &choix);

	} while (choix != 2);

	printf("Vos points s'elevent a : %d\n", points);
	return 0;
}