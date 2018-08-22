#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

struct Pontos {
	int vitorias;
	int empates;
	int derrotas;
};

struct Time {
	char nome[40];
	struct Pontos pts;
};

void leiaTime(struct Time* time) {		// Leio cada Time
	printf("Time: ");
	scanf("%s", (*time).nome);
	printf("Vitórias: ");
	scanf("%d", &(*time).pts.vitorias);
	printf("Empates: ");
	scanf("%d", &(*time).pts.empates);
	printf("Derrotas: ");
	scanf("%d", &(*time).pts.derrotas);
}

void preencheTimes(struct Time times[]) {		// Crio um array de struct para os times
	int i;
	for (i=0; i<N; i++) {
		leiaTime(&times[i]);
		printf("\n");
	}
}

void preencheArqTabela(struct Time times[]) {		//Preencho no Arquivo a Tabela de times 
	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/projeto.txt", "w+");
	int i;
	for (i=0; i<N; i++) {
		fprintf(f, "%s\t\t%d\t\t%d\t\t%d\n", times[i].nome, 
		times[i].pts.vitorias, times[i].pts.empates, times[i].pts.derrotas);		
	}
	fclose(f);
}

void escreveEmBin(struct Time times[]) {		// Escrevo programa em um Arquivo Binário
	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/projeto.bin", "wb");
	int i;
	for (i=0; i<N; i++) {
		fwrite(times[i].nome, sizeof(char), strlen(times[i].nome)+1, f);
		fwrite(&times[i].pts.vitorias, sizeof(int), 1, f);
		fwrite(&times[i].pts.empates, sizeof(int), 1, f);
		fwrite(&times[i].pts.derrotas, sizeof(int), 1, f);
		
	}
	fclose(f);
}

void leEmBin(struct Time times[]) {		// Leio o programa em um Arquivo Binário
	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/projeto.bin", "rb");
	int i;
	for (i=0; i<N; i++) {
		fread(times[i].nome, sizeof(char), strlen(times[i].nome)+1, f);
		fread(&times[i].pts.vitorias, sizeof(int), 1, f);
		fread(&times[i].pts.empates, sizeof(int), 1, f);
		fread(&times[i].pts.derrotas, sizeof(int), 1, f);
	}
	fclose(f);
}

int main() {
	struct Time times[N];
	preencheTimes(times);
	preencheArqTabela(times);
	escreveEmBin(times);
	leEmBin(times);
	int i;
	for (i=0; i<N; i++) {
		printf("Times: %s , %d,  %d,  %d\n", times[i].nome, times[i].pts.vitorias, times[i].pts.empates, times[i].pts.derrotas);
	}
	return 0;
}	
