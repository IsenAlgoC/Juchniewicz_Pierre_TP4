#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define TAILLETAB 100

int main() {
	int valeurRecherchee;	//d�claration des variables
	int Tab[TAILLETAB];

	time_t t;
	srand((unsigned)time(&t));	//mise en place de l'al�atoire bas� sur le temps


	for (int i = 0; i < TAILLETAB; i++) {	//remplissade du tableau avec des valeurs al�atoires
		Tab[i] = rand() % 20;
	}
	int* ptr;	//initialisation du pointeur 
	ptr = &Tab[0];

	printf("Saisir une valeur entre 0 et 20 : ");
	scanf_s("%d", &valeurRecherchee);			//saisie de la valeur � chercher


	printf("La valeur %d se trouve en : ", valeurRecherchee);
	for (int i = 0; i < TAILLETAB; i++) {
		if (*ptr == valeurRecherchee) {		//recherche de la valeur dans le tableau � l'aide du pointeur
			printf(" %d ", i+1);			//(i+1 pour ne pas compter � partir de 0)
		}
		ptr++;
	}
	printf("\n");

	printf("\nLe tableau est : \n \n");
	for(int i = 0; i < TAILLETAB; ++i) {		//affichage du tableau pour v�rifier
		if ((i % 10 == 0) & (i != 0)) {
			printf("\n");
		}
		printf(" %d ", Tab[i]);
	}
}