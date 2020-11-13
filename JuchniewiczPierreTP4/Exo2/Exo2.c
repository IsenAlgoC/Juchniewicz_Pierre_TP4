#include <stdlib.h>
#include <stdio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];								
	printf("avec 'for' et 'MyTab1' :\n");
	for (int i = 0; i < TAILLETAB1; ++i) {						
		MyTab1[i] = i + 1;
		printf(" %d %c", MyTab1[i], SEPARATEUR);
	}
	
	printf("\n\n");
	printf("avec 'for' et 'MyPtr1' :\n");
	int *MyPtr1 = &MyTab1[TAILLETAB1-1];				//déclaration du pointeur MyPtr1 vers l'adresse de MyTab1
	for (MyPtr1; MyPtr1 >= &MyTab1[0]; --MyPtr1){		//on utilise la variable MyPtr1 pour parcourir toutes les valeurs de MyTab1 jusqu'à sa dernière valeur, en décrémentant le pointeur
		printf(" %d %c", *MyPtr1, SEPARATEUR);			//en utilisant "*" devant MyPtr1, on affiche sa valeur et non l'adresse qu'elle porte
	}
}