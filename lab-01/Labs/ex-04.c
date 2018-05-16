#include <stdio.h>

int main() {

	float milha;
	float valkm;
	printf("Velocidade em milhas(mph): ");
	scanf("%f",&milha);
	valkm=milha*1.6;
	if (valkm<80) {
		printf(" ACELERE - Velocidade atual(Km/h): %f\n",valkm);
	}
	if (valkm>100) {
		printf(" DESACELERE - Velocidade atual(Km/h): %f\n",valkm);
	}
	else {
		printf(" MANTENHA - Velocidade atual(Km/h): %f\n",valkm);
	}	

return 0;

}
