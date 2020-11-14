#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAILLEMAXMOT 20

int main() {
	char mot[TAILLEMAXMOT];							//initialisation des variables
	int palindrome = 0;
	printf("inserez votre mot : ");
	scanf_s("%s", mot, (unsigned)_countof(mot));	//on insère notre mot
	printf("Votre mot '%s' ", mot);					//indique le mot inséré 

	for (int i = 0; i < TAILLEMAXMOT; ++i) {		//on enlève toute majuscule, tout accent...
		mot[i] = tolower(mot[i]);
		if ((mot[i] == 'é') || (mot[i] == 'è') || (mot[i] == 'ê')){
			mot[i] = 'e';
		}
		else if ((mot[i] == 'à')|| (mot[i] == 'â')){
			mot[i] = 'a'; 
		}
		else if (mot[i] == 'ù'){	
			mot[i] = 'u'; 
		}
	}

	for (int i = 0; i < strlen(mot); ++i) {			// on parcours i sur toute la longueur du mot
		if (mot[i] == mot[(strlen(mot) - 1) - i]) {	// si i == la lettre symétriquement opposé, alors palindrome +=1
			palindrome += 1;		
		}

	}

	if (palindrome == strlen(mot)) {				//si toutes les lettres respectent la symétrie du mot, alors c'est un palindrome
		printf("est un palindrome");
	}
	else {
		printf("n'est pas un palindrome");			//sinon s'en est pas un 
	}
}