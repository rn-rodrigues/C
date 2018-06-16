#include <stdio.h>
#include <math.h>


struct Pontos {
	int x;
	int y;
};

void leiaPonto(struct Pontos* pontos) {
	printf("Digite o ponto x de (x,y):");          //Lê os pontos
	scanf("%d", &(*pontos).x);
	printf("Digite o ponto y de (x,y):");
	scanf("%d", &(*pontos).y);
}	
	
void preencheVet(struct Pontos vetp[]) {
	int i;
	for (i=0; i<3; i++) {                       // Preenche os pontos em cada posição do vetor
		struct Pontos p;
		leiaPonto(&p);
		vetp[i]= p;
	}	
}

struct Pontos pontoMaisDistante(struct Pontos ps[3]) {
	int i;
	float maiorDistancia=0;
	float d;
	struct Pontos maiorPonto;
	for (i=0; i<3; i++) {
		d = sqrt( pow(ps[i].x -0,2) + pow(ps[i].y -0,2));    // Calcula o ponto mais distante da origem
		if (d>maiorDistancia) {
			maiorPonto.x= ps[i].x;
			maiorPonto.y= ps[i].y;
			maiorDistancia = d;		
		}
	}
	return maiorPonto;
}

int main() {
	int i;
	struct Pontos maiorPonto;
	struct Pontos vet[3];
	preencheVet(vet);
	for (i=0; i<3; i++) {
		maiorPonto= pontoMaisDistante(vet);
	}
	printf("O ponto mais distante de (0,0) é: (%d,%d)\n", maiorPonto.x, maiorPonto.y);
	return 0;
}
 	
		 

					
	
