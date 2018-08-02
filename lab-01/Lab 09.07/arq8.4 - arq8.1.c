#include <stdio.h>
#include <string.h>


void escrevaString (FILE* f, char* cad) {
	int i, tamanho;
	tamanho = strlen(cad);
	for (i=0; i<tamanho; i++) {
		fputc(cad[i], f);
	}
	fclose(f);
}

int main() {
	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/arq8.4-arq8.1.txt", "w");
	char cad[25];
	printf("String: ");
	scanf("%s", cad);
	escrevaString (f, cad);
	return 0;
}
