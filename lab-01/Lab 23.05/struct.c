#include <stdio.h>
#include <string.h>

struct time {
	char nome[30]; //tamanho do nome do time => máx. 30 caracteres
	int v;
	int d;

};

void preenche(struct time* t) { // t é o time com seus campos
	printf("Time: ");
	scanf("%s",(*t).nome);
	printf("Vitórias: ");
	scanf("%d",&((*t).v));
	printf("Derrotas: ");
	scanf("%d",&((*t).d));
}

int main() {
	struct time t;
	preenche (&t);
	printf("Time: %s\n Vitórias: %d\n Derrotas: %d\n",t.nome, t.v, t.d);
	return 0;
}

 
				 

	
