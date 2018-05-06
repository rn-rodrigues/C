#include <stdio.h>

int main(void) {

	int soma=0;
	int num;
	printf("Digite um número(zero para encerrar): ");
	scanf("%d",&num);
	while(num!=0) {
		soma = soma + num;
		printf("Digite um número: ");
		scanf("%d",&num);
	}
	printf("Soma dos números lidos: %d\n",soma);
	
return 0;

}


