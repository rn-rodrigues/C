#include <stdio.h>
#include <string.h>

void escrevaStrings (FILE* f, char strings[][25]) {
	int i,j,tamanho;	
	for (i=0; i<3; i++) {
		tamanho = strlen(strings[i]);
		for (j=0; j<tamanho; j++) {
			fputc(strings[i][j], f);
		}
	fprintf(f,"\n");	
	}

	
}


int main() {
	int i;
	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/arq8.4-arq8.3.txt", "w");
	char strings[3][25];
	for (i=0; i<3; i++) {
		printf("Digite cada string: ");
		scanf("%s", strings[i]);
	}
    
	escrevaStrings (f, strings);
	printf("\nStrings = (%s, %s, %s)\n", strings[0], strings[1], strings[2]);
	fclose(f);
	return 0;
}
	
	


	
