#include <stdio.h>
#define L 10
#define C 10

struct Posicao {
	int x,y;
};

struct Personagem {
	int imagem;
	struct Posicao posicao;
	int pontuacao;
};

void leiaPosicao(struct Posicao* posicao) {
	printf("Digite a posição do Personagem:");
	scanf("%d %d",&(*posicao).x, &(*posicao).y);

}

void leiaPersona(struct Personagem* personagem) {
	printf("\n\n************ Personagem ************\n\n");
	printf("Imagem do Personagem representada por um inteiro:");
	scanf("%d", &(*personagem).imagem);
	printf("Pontuação:");
	scanf("%d", &(*personagem).pontuacao);
	leiaPosicao(&(*personagem).posicao);

}

int main() {
	int i,j;
	int mat[L][C] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
	};
	
	
	struct Personagem personagens[10];
	for (i=0; i<L; i++) {
		leiaPersona(&personagens[i]);
		mat[personagens[i].posicao.x][personagens[i].posicao.y] = personagens[i].imagem;
	}

	printf("  ");
	for (j=0; j<C; j++) {
		printf("%d", j);
	}
	printf("\n");
	for (i=0; i<L; i++) {
		printf("%d", i);
		for (j=0; j<C; j++) {
			if (mat[i][j] == 0) {
				printf("* ");
			}
			else {
				printf("%d", mat[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}			
