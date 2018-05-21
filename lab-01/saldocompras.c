#include <stdio.h>

void compra(int* conta, int valor) {
	*conta= *conta - valor;
}

int main() {
	int i, conta1, conta2;
	int* conta;
	int compras[]= {100,50,80,30,20};
	printf("Digite o saldo da conta1: R$");
	scanf("%d", &conta1);
	printf("Digite o saldo da conta2: R$");
	scanf("%d", &conta2);
	
	for (i=0; i<5; i++) {
		if (conta1>conta2) {
			conta= &conta1;
		}
		else {
			conta= &conta2;
		}
		compra(conta, compras[i]);
		printf("Valor à ser descontado do saldo: R$%d\n",compras[i]);
		printf("Saldo atual: conta1= R$%d\n / conta2= R$%d\n", conta1, conta2);
	}

return 0;

}
	


