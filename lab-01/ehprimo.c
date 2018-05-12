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


int main() {
	int n;
	printf ("Digite um n° p/ saber se é ou não primo: "); 
	scanf("%d",&n);
	if (ehprimo(n)==0) {
		printf("Não é primo: %d\n",n);
	}
	else {
		printf("É primo: %d\n",n);
	}
	return 0;
}





