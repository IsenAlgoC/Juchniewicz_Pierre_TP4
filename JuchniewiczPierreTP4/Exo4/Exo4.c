#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAILLEMAXMOT 20

int main() {
	char mot[TAILLEMAXMOT];
	int palindrome = 0;
	printf("inserez votre mot : ");
	scanf_s("%s", mot, (unsigned)_countof(mot));	//on ins�re notre mot

	for (int i = 0; i < TAILLEMAXMOT; ++i) {								//on enl�ve toute majuscule, tout accent...
		mot[i] = tolower(mot[i]);
		if ((mot[i] == '�') || (mot[i] == '�') || (mot[i] == '�')){
			mot[i] = 'e';
		}
		else if ((mot[i] == '�')|| (mot[i] == '�')){
			mot[i] = 'a'; 
		}
		else if (mot[i] == '�'){	
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