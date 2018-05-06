#include <stdio.h>
   
int main() {
	int n,soma=0,i=1;
	printf("Digite a qtdade(n): ");
        scanf("%d", &n);
        for (i; i<=n; i++) {
		soma= soma + (i *i);
	}
       	printf("O Somatório é: %d\n",soma);
    	
return 0;

}
