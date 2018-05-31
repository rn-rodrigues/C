#include <stdio.h>
#include <string.h>

struct Posicao {
	int x,y;
};

struct Personagem {
	int imagem;
	int pontuacao;
	struct Posicao posicao;
};

void leiaPosicao(struct Posicao* posicao) {
	printf("Sua Posição: ");
	scanf("%d %d", &(*posicao).x, &(*posicao).y);
}

void leia(struct Personagem* p) {
	printf("Imagem do Personagem representada por um inteiro: ");
	scanf("%d", &((*p).imagem));
	printf("Sua Pontuação: ");
	scanf("%d", &((*p).pontuacao));
	leiaPosicao(&(*p).posicao);
}

int main() {
	struct Personagem personagens[3];
	int i;
	for (i=0; i<3; i++) {
		struct Personagem personagem;
		leia(&personagem);
		personagens[i] = personagem;
		printf("Personagem: %d Posição: (%d,%d) Pontuação: %d\n", personagens[i].imagem, personagens[i].posicao.x, personagens[i].posicao.y, personagens[i].pontuacao);
	}
	
	return 0;
}
