#include <stdio.h>
#include <string.h>

struct Pessoa {
	int idade;
	char nome[25];
};


int main() {
	struct Pessoa vetPs[100];
	int N;
	printf("Quantidade de Pessoas: ");
	scanf("%d", &N);
	int i;
	for (i=0; i<N; i++) {
		printf("Idade da Pessoa: ");
		scanf("%d", &vetPs[i].idade);
		printf("Nome da Pessoa: ");
		scanf("%s", vetPs[i].nome);
	printf("\n");
	}
	
	/*for (i=0; i<N; i++) {
		printf("Idade: %d Nome: %s\n", vetPs[i].idade, vetPs[i].nome);}*/
	
	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/bin8.1.bin", "wb");
	fwrite(&N, sizeof(int), 1, f);
	for (i=0; i<N; i++) {
		fwrite(&vetPs[i].idade, sizeof(int), 1, f);
		fwrite(vetPs[i].nome, sizeof(char), strlen(vetPs[i].nome)+1, f);
		
	}
	fclose(f);
	
	//Leitura em binário
	struct Pessoa Ps[100];
	FILE* g = fopen("/home/renan/Área de Trabalho/LP1/bin8.1.bin", "rb");
	int M;
	fread(&M, sizeof(int), 1, g);
	int j;
printf("%d\n", M);
	for (j=0; j<M; j++) {
		fread(&Ps[j].idade, sizeof(int), 1, g);
		int c = fgetc(g);
		int k = 0;
		while (c != '\0') {
//printf("%c\n", c);
			Ps[j].nome[k] = c;
			k++;
			c = fgetc(g);
		}
		Ps[j].nome[k] = '\0';
	}
	fclose(g);
	printf("%d\n", M);
	for (j=0; j<N; j++) {
		printf("Idade: %d  Nome: %s", Ps[j].idade, Ps[j].nome);
	}
	return 0;
}

 
	
		
	
	
