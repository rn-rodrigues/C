#include <stdio.h>
#include <string.h>

int strlenn(char* str) {        //tamanho da string
	int i = 0, cont = 0;

	while (str[i] != '\0') {
		cont = cont+1;
		i++;
	}
	return cont;
}

void strjoin(char strDest[], char str1[], char str2[]) {       //junta as strings de origem com a de destino
	int i,j;
	for (i=0; i<strlenn(str1); i++) {
		strDest[i] = str1[i];
	}
	for (j=0; j<strlenn(strDest); j++) {
		strDest[i+j] = str2[j];
	}
	strDest[i+j]= '\0';	
}

int main() {
	char str1[10];
	char str2[10];
	printf("Digite a 1° String de origem: ");
	scanf("%s", str1);
	printf("Digite a 2° String de origem: ");
	scanf("%s", str2);
	int tamanho1 = strlenn(str1);
	int tamanho2 = strlenn(str2);
	int tamanho = tamanho1 + tamanho2;
	char strDest[tamanho];
	strjoin(strDest, str1, str2);	
	printf("Tamanho String1: %d\n", tamanho1);
	printf("Tamanho String2: %d\n", tamanho2);
	printf("Tamanho Total: %d\n", tamanho);
	printf("String Destino: %s\n", strDest);	
	return 0;
}
	
