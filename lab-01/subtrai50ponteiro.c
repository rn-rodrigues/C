#include <stdio.h>

int main() {
	int a,b;
	int* p;
	printf("Digite um inteiro a: ");
	scanf("%d", &a);
	printf("Digite um inteiro b: ");
	scanf("%d", &b);
	printf("Os valores são a=%d / b=%d\n", a, b);
	if (a>b) {
		p= &a;
	}
	else {
		p= &b;
	}
	*p=*p-50;
	printf("Os novos valores são: a=%d / b=%d\n",a , b);

return 0;

}
