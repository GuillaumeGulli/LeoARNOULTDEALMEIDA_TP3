#include <stdio.h>
#include <stdlib.h>
#define carre(x) (x)*(x)
//il faut mettre des parenteses sur les x car sinon il effectue l'opération sans faire le + 1 avant
//il fait 5+1*5+1 et pas (5+1)*(5+1)
int main() {
	int nb = 5,tmp;
	tmp = carre(nb);
	printf("nb carre = %d \n", tmp);
	tmp = carre(nb + 1);
	printf("nb + 1 carre = %d", tmp);

}