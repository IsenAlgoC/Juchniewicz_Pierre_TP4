#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
	char phrase[1024];					//initialisation des variables
	int nbmots = 1;
	float caracteres = 0;

	printf("Saisissez une phrase : ");

	gets_s(phrase, 1024);				//prise en compte des caractères entrés par l'utilisateur

	for (int i = 1; i < strlen(phrase); i++) {	
		if (phrase[i] == ' ') {			//si il y a un espace...
			if (phrase[i + 1] != ' ' && phrase[i + 1] != '.' && phrase[i + 1] != ',' && phrase[i + 1] != '-') {	//mais que après cette espace il n'y a pas un autre espace..
				++nbmots;				//alors ce qui suit est un mot
			}
		}
		else {
			++caracteres;
		}
	}
	printf("\nVotre phrase '%s' contient %d mots avec une moyenne de %.2f caracteres", phrase,nbmots, caracteres / nbmots);
}	