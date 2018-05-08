#include <stdio.h>

int main() {

	int temps[5];
	char temps[201];
	int media;
	int soma;
	int somamedia;
	for (i=0; i<5; i++) {
		printf("Digite a temperatura: ");
		scanf("%d",&temps[i]);
		soma=soma+temps[i];
	}
	media=soma/5;
	for (i=0; i<5; i++) {
		if temps[i]>=media {
			printf("Numeros acima da média: %d\n",temps[i]);
		}
	}
	printf("Média das temperaturas: %d\n",media)
return 0;

}
	

		
