#include <stdlib.h>
#include <stdio.h>
#define TAILLENOMS 20

int main() {
	char nom[TAILLENOMS] = { 0 }, prenom[TAILLENOMS] = { 0 }, sexe;		//déclaration des variables

	printf("Inserez votre nom (appuyez sur ENTREE pour valider) : ");
	for (int i = 0; i < TAILLENOMS; ++i) {			
		char c = getchar();												//on récupère les caractères de l'utilisateur 			
		if (c == 10) {													//si l'utilisateur actionne la touche "Entree", on sort de la boucle 
			break;
		}
		nom[i] = c;														//on récupère dans le tableau les caractères que rentrent l'utilisateur	
	}

	printf("Inserez votre prenom (appuyez sur ENTREE pour valider) : ");
	for (int i = 0; i < TAILLENOMS; ++i) {								//même principe que la boucle précédente
		char c = getchar();
		if (c == 10) {
			break;
		}
		prenom[i] = c;
	}
			
	printf("Inserez votre sexe (H ou F) : ");							
	sexe = _getch();													//on récupère le caractère directement entrée par l'utilisateur
	if (sexe == 'H'){													
		printf("Monsieur "); 
	}
	else { 
		printf("Madame "); 
	}
	printf("%s %s", nom, prenom);

}