#include <stdio.h>

int main() {

	int temps[5];
	int media;
	int soma=0;
	int i=0;
	while (i<5) {
		printf("Digite a %dº temperatura: ", i+1);
		scanf("%d",&temps[i]);
		if (temps[i]>=-100 && temps[i]<=100) {
			soma=soma+temps[i];
			i++;
		}
		else {
			printf("A temperatura deve estar entre -100 e 100\n");
		}
	}
	media=soma/5;
	for (i=0; i<5; i++) {
		if (temps[i]>=media) {
			printf("Temperaturas acima da média: %d\n",temps[i]);
		}
	}
	printf("Média das temperaturas: %d\n",media);
	printf("Total das temperaturas: %d\n",soma);

return 0;

}
