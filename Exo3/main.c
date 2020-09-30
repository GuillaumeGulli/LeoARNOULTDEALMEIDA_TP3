#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NBMAXNOTES 30

int main() {
	int ABS = 0, BNOTE = 0, max = 0, min = 20, i = 0;
	float var = 21, note[NBMAXNOTES], moy = 0;
	for (i = 0; i < NBMAXNOTES; i++) { note[i] = -2; } // inititalisation à -2
	i = 0;
	while (i != 30) {
		char choix;
		printf("Entrer la note no %d : ",i);
		scanf_s("%5f", &var); //on entre la note
		if (var > 20.0 || var < 0.0) {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes ? A/O/N ");
			choix = _getch();//on entre le choix 
			switch (choix) {
			case 'A': // absent
				note[i] = -1;
				printf("\n");
				i += 1;
				ABS += 1;
				break;
			case 'O': // stop
				i = NBMAXNOTES;
				break;
			case 'N': //continue
				printf("\n");
				break;
			default:
				break;
			}
		}
		else { //si valeur valide
			if (min > var) { min = var; }
			if (max < var) { max = var; }
			note[i] = var;
			i += 1;
		}
		
	}
	i = 0;
	for (i = 0; i < NBMAXNOTES; i++) { //pour la moyenne
		if (note[i] == -2) { break; } // fin de la liste
		if (note[i] != -1){
			moy += note[i];
			BNOTE += 1;
		}
		
	}
	moy = moy / BNOTE;
	printf("\nLe nombre de note valide : %d\nLe nombre d'absent : %d\n", BNOTE, ABS);
	printf("La moyenne des notes : %0.2f\nLa note min : %d\nLa note max : %d", moy, min, max);
	float ecarttype,somme = 1,tmp;
	for (i = 0; i < NBMAXNOTES; i++) { //pour l'ecart type
		if (note[i] == -2) { break; } // fin des valeurs
		if (note[i] != -1) {
			tmp = pow((note[i] - moy), 2);
			somme += tmp;
		}
	}
	ecarttype = somme / (BNOTE - 1);
	ecarttype = sqrt(ecarttype);
	printf("\nEcart-type : %f\n", ecarttype);
	i = 0;
	while (note[i] != -2) {
		printf("Note %d : %0.2f\n", i, note[i]);
		i+=1;

	}


	
}