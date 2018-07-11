#include <stdio.h>
#include <string.h>
#define QTDCASA 5

struct Casa {
	int nCasa;  // númeração da casa
	char cor[30]; //Cor da casa
	  
};

struct Vila {
	char nomeVila[30]; //Nome da Vila
	struct Casa casa[QTDCASA]; //quantidade de casas da Vila
};

void preencheCasa(struct Casa* casa) {
		int i;
		for (i=0; i<QTDCASA; i++) {
			printf("Digite o n° da %d° casa:",i+1);
			scanf("%d", &(*casa).nCasa);
			printf("Digite a cor da %d° casa: ",i+1);
			scanf("%s", (*casa).cor); 
		}
}

void preencheVila(struct Vila* vila) {
	int i;
	printf("Nome da Vila: ");
	scanf("%s", (*vila).nomeVila);
   	preencheCasa(&(*vila).casa[i]);

}

int main() {
	struct Vila vila;
	preencheVila(&vila);
	return 0;
}
