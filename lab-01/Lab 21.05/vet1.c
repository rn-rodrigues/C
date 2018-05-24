#include <stdio.h>

void preenche(int* vet, int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("Digite o %d° inteiro: ",(i+1));
		scanf("%d", vet+i);
	}
}


int media(int* vet, int n) {
	int soma=0;
	float media;
	int i;	
	for (i=0; i<n; i++); {
		soma= soma+ *(vet+i);
	}
	media=soma/n;
	return media;
}

int main() {
	int i, n;
	int vet[n];
	float m;	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	preenche(vet, n);
	m= media(vet, n);
	for (i=0; i<n; i++) {
		printf("Vetor: %d\n", *(vet+i));
	}
	printf("Média: %.2f\n", m);
	return 0;
} 


	
	 
