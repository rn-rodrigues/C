#include <stdio.h>

int main() {

	int dinmax=1000;
	float dol=3.17;
	float valcel;
	float valceln;
	printf("Valor do celular em dólares: $");
	scanf("%f",&valcel);
	valceln=valcel*dol;
	if (valceln<=dinmax) {
		printf("Bom negócio - Valor do celular em reais: %f\nR$",valceln);
	}
	else {
		printf("Mau negócio - Valor do celular em reais: %f\nR$",valceln);
	}

return 0;

}
			
