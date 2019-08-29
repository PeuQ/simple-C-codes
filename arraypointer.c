#include <stdio.h>
#include <stdlib.h>

int main(){
	//DEFINIÇÃO DE VARIÁVEIS
	int n, c,i;
	int array_original[100], array_inverso[100];
	int *p;

	//INPUT
	printf("Qual o tamanho do array original?\n");
	scanf("%d", &n);

	printf("\nDigite os números do seu array[%d]:\n", n);
	for(c = 0; c < n; c++){
		scanf("%d", &array_original[c]);
	}
	
	printf("\nO seu array_original é:\n");
	for(c = 0; c < n; c++){
		printf("%d,", array_original[c]);
	}
	printf("\n");

	//PONTEIRO E INVERSÃO
	p = &array_original[0];
	
	for (c=n-1; c >= 0; c--) {
		array_inverso[c] = *p;
		p++;
	}

	//OUTPUT
	printf("\nSeu array invertido é:\n");

	for(c=0;c<n;c++){
		printf("%d,",array_inverso[c]);
	}
	printf("\n");

	return 0;
}
