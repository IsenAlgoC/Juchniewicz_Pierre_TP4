#include <stdlib.h>
#include <stdio.h>
#define TAILLENOMS 20

int main() {
	char nom[TAILLENOMS] = { 0 }, prenom[TAILLENOMS] = { 0 }, sexe;		//d�claration des variables

	printf("Inserez votre nom (appuyez sur ENTREE pour valider) : ");
	for (int i = 0; i < TAILLENOMS; ++i) {			
		char c = getchar();												//on r�cup�re les caract�res de l'utilisateur 			
		if (c == 10) {													//si l'utilisateur actionne la touche "Entree", on sort de la boucle 
			break;
		}
		nom[i] = c;														//on r�cup�re dans le tableau les caract�res que rentrent l'utilisateur	
	}

	printf("Inserez votre prenom (appuyez sur ENTREE pour valider) : ");
	for (int i = 0; i < TAILLENOMS; ++i) {								//m�me principe que la boucle pr�c�dente
		char c = getchar();
		if (c == 10) {
			break;
		}
		prenom[i] = c;
	}
			
	printf("Inserez votre sexe (H ou F) : ");							
	sexe = _getch();													//on r�cup�re le caract�re directement entr�e par l'utilisateur
	if (sexe == 'H'){													
		printf("Monsieur "); 
	}
	else { 
		printf("Madame "); 
	}
	printf("%s %s", nom, prenom);

}