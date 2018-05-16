#include <stdio.h>

void troca(int* x, int* y) {
	int tmp= *x;	
	*x= *y;
	*y= tmp;

}

int main() {
	int a=10, b=20;
	troca(&a, &b);
	printf("%d %d\n", a, b); //20 10

return 0;

}  

