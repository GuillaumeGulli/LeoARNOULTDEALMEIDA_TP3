#include <stdio.h>
#include <stdlib.h>
int main() {
	unsigned int n = 2868838400;
	int bit, i, octet;
	octet = sizeof(n);
	bit = octet * 8;
	printf("nombre d'octet : %d \n", octet);
	printf("nombre de bit : %d \n",bit);
	for (i = 0; i < bit; i++) {
		printf("bit ");
		if (i < 10){printf(" ");}
		if (n & (1 << i)) {
			printf("%d: ON\n", i);
		}
		else {
			printf("%d: OFF\n", i);
		}
	}
	printf(" Bye ! ");
	system("pause");
}