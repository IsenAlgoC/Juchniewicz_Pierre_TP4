#include <stdlib.h>
#include <stdio.h>
#include "TP4.h"


int main() {
	HEURE Heure_Debut, Heure_Fin, Duree;									//déclaration des variables

	Heure_Debut.heure = 12;													//déclaration des heures et minutes de la variable "Heure_Debut"
	Heure_Debut.minute = 30;					

	Duree.heure = 00;														//déclaration des heures et minutes de la variable "Duree"
	Duree.minute = 45;						
		
	Heure_Fin.heure = Heure_Debut.heure + Duree.heure;						//initialisation des valeurs heure et minute de Heure_Fin
	Heure_Fin.minute = Heure_Debut.minute + Duree.minute;

	if (Heure_Fin.minute  >= 60) {											//Si les minutes dépassent 60, alors...
		Heure_Fin.heure = Heure_Fin.heure + Heure_Fin.minute / 60;			//les heures augmentent de n fois 60 minutes
		Heure_Fin.minute = Heure_Fin.minute % 60;							//et on garde uniquement le reste du modulo pour les minutes restantes
	}

																			//on print au format "variable = hh:mm" en utilisant %0.2d
	printf("Heure de debut = %0.2d : %0.2d \nduree =  %0.2d : %d \nheure de fin = %0.2d : %0.2d\n", Heure_Debut.heure, Heure_Debut.minute, Duree.heure, Duree.minute, Heure_Fin.heure, Heure_Fin.minute);

}