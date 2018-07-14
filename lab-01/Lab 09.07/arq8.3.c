#include <stdio.h>
#include <string.h>

int main() {
	int i,j,tamanho;
	char strings[3][25];
	for (i=0; i<3; i++) {
		printf("Digite cada string: ");
		scanf("%s", strings[i]);
	}
	printf("\nStrings = (%s, %s, %s)\n\n", strings[0], strings[1], strings[2]);
	

	FILE* f = fopen("/home/renan/Área de Trabalho/LP1/arq8.3.txt", "w");
	for (i=0; i<3; i++) {	
		tamanho = strlen(strings[i]);
		for (j=0; j<tamanho; j++) {
			fputc(strings[i][j], f);
		}
	}
	
	fclose(f);
	return 0;

} 
			
	
		
		
