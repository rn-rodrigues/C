#include <stdio.h>
#include <string.h>
#define QTDCASA 5

struct casa {
	int nCasa;  // númeração da casa
};

struct vila {
	char nomeVila[30];
	struct casa casa[QTDCASA]; //quantidade de casas da Vila
};

void preenche2(struct vila* vila) {
	int i;
	printf("Nome da Vila: ");
	scanf("%s", (*vila).nomeVila);
	for (i=0; i<QTDCASA; i++) {
		printf("Digite o n° da %d° casa:", i+1);
		scanf("%d", &((*vila).casa[i].nCasa));
	}
}

int main() {
	struct vila vila;
	preenche2(&vila);
	return 0;
} 


