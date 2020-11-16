#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define TAILLETAB 100

int main() {
	int valeurRecherchee;	//déclaration des variables
	int Tab[TAILLETAB];

	time_t t;
	srand((unsigned)time(&t));	//mise en place de l'aléatoire basé sur le temps


	for (int i = 0; i < TAILLETAB; i++) {	//remplissade du tableau avec des valeurs aléatoires
		Tab[i] = rand() % 20;
	}
	int* ptr;	//initialisation du pointeur 
	ptr = &Tab[0];

	printf("Saisir une valeur entre 0 et 20 : ");
	scanf_s("%d", &valeurRecherchee);			//saisie de la valeur à chercher


	printf("La valeur %d se trouve en : ", valeurRecherchee);
	for (int i = 0; i < TAILLETAB; i++) {
		if (*ptr == valeurRecherchee) {		//recherche de la valeur dans le tableau à l'aide du pointeur
			printf(" %d ", i+1);			//(i+1 pour ne pas compter à partir de 0)
		}
		ptr++;
	}
	printf("\n");

	printf("\nLe tableau est : \n \n");
	for(int i = 0; i < TAILLETAB; ++i) {		//affichage du tableau pour vérifier
		if ((i % 10 == 0) & (i != 0)) {
			printf("\n");
		}
		printf(" %d ", Tab[i]);
	}
}