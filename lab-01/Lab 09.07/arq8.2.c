#include <stdio.h>
#include <string.h>

int main() {
	char cad[25];	
	int i = 0;
	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/arq8.1.txt", "r");
	while (cad != EOF) {
		cad[i] = fgetc(f);
		printf("%c\n", cad[i]);			
		i++;
	}

	fclose(f);
	return 0;

}

