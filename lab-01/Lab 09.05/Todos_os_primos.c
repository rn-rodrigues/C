#include <stdio.h>

int ehprimo(int n) {
	int i;
	for (i=2; i<n; i++) {
		if (n%i==0) {
			return(0);  //Não é primo
		}
	}

return(1); //É primo

}

int primos(int n) {
	int j;
	for (j=1; j<=n; j++) {
		if(ehprimo(j)) {
			printf("%d\n",j); 
		}
	}
}

int main() {
	int x;
	printf("Digite um n° para imprimir os primos até esse n°: ");
	scanf("%d",&x);
	printf("Primos de 1 até %d são: \n",x);
	primos(x);
	return (0);
}

	
