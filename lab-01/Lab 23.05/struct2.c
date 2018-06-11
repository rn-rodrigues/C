#include <stdio.h>
#include <string.h>
#define QTDCASA 5

struct Casa {
	int nCasa;  // númeração da casa
	char cor[30]; //Cor da casa
	  
};

struct Vila {
	char nomeVila[30];
	struct Casa casa[QTDCASA]; //quantidade de casas da Vila
};

void preenche2(struct Vila* vila) {
	int i;
	printf("Nome da Vila: ");
	scanf("%s", (*vila).nomeVila);
	for (i=0; i<QTDCASA; i++) {
		printf("Digite o n° da %d° casa:", i+1);
		scanf("%d", &((*vila).casa[i].nCasa));
		printf("Digite a cor da %d° casa: ",i+1);
		scanf("%s", (*vila).casa[i].cor); 		
	}
}

int main() {
	struct Vila vila;
	preenche2(&vila);
	return 0;
} 



