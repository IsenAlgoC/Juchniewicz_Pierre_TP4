#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAILLEMAXMOT 20

int main() {
	char mot[TAILLEMAXMOT];
	int palindrome = 0;
	printf("inserez votre mot : ");
	scanf_s("%s", mot, (unsigned)_countof(mot));	//on insère notre mot

	for (int i = 0; i < TAILLEMAXMOT; ++i) {								//on enlève toute majuscule, tout accent...
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

	if (strlen(mot) % 2 == 0) {
		for (int i = 0; i < strlen(mot)/2; ++i) {
			if (mot[i] == mot[strlen(mot) - i]) {
				palindrome = palindrome + 1;
			}
		}
	}


	
}