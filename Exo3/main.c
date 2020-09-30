#include <stdio.h>
#include <stdlib.h>
#define NBMAXNOTES 30

int main() {
	int ABS = 0, BNOTE = 0, max = 0, min = 20, i = 0;
	float note = 21, moy = 0;
	while (i != 30) {
		
		char choix;
		
		printf("Entrer la note no %d : ",i);
		scanf_s("%5f", &note);
		if (note > 20.0 || note < 0.0) {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes ? A/O/N ");
			choix = _getch();
			switch (choix) {
			case 'A':
				printf("\n");
				i += 1;
				ABS += 1;
				break;
			case 'O':
				i = 30;
				break;
			case 'N':
				printf("\n");
				break;
			default:
				break;
			}
		}
		else {
			if (min > note) { min = note; }
			if (max < note) { max = note; }
			i += 1;
			moy += note;
			BNOTE += 1;


		}
		
	}
	moy = moy / BNOTE;
	printf("\nLe nombre de note valide : %d\nLe nombre d'absent : %d\n", BNOTE, ABS);
	printf("La moyenne des notes : %0.2f\nLa note min : %d\nLa note max : %d", moy, min, max);
	
}