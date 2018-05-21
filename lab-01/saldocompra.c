#include <stdio.h>

void compra(int* conta, int valor) {
	*conta= *conta - valor;
}

int main() {
	int conta1, conta2;
	int* conta;

	printf("Digite o saldo da conta1:R$ ");
	scanf("%d", &conta1);
	printf("Digite o saldo da conta2:R$ ");
	scanf("%d", &conta2);
	if (conta1>conta2) {
		conta= &conta1;
	}
	else {
		conta= &conta2;
	}
	compra(conta,1000);
	printf("Saldos atuais são: conta1= R$%d / conta2= R$%d\n",conta1, conta2);

return 0;

}
