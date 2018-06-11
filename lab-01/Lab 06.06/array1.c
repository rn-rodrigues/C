#include <stdio.h>

void preenche(int vet[3][2]) {
	int i, j, n;
	for (i=0; i<3; i++) {
		for (j=0; j<2; j++) {
			printf("Digite os valores do vetor: ");
			scanf("%d", &n);
			vet[i][j]= n;
		}
	}
}

int media(int vet[3][2]) {
	int soma=0;
	int media, i, j;
	for (i=0; i<3; i++) {
		for (j=0; j<2; j++) {
			soma= soma+vet[i][j];
		}
	}
	media=soma/(3*2);
	return media;	
}


int main() {
	int vet_int[3][2], i, j;
	preenche(vet_int);
	int media_vet = media(vet_int);
	printf("      ****** Matriz 3x2 ******\n");
	for (i=0; i<3; i++) {		
		for (j=0; j<2; j++) {
			printf("\t   %d  ", vet_int[i][j]);		
		}
	printf("\n");
	}
	printf("\nMédia:%d\n", media_vet);
	return 0;
}



