#include <stdio.h>
//DEFININDO FUNÇÃO SWAP

void swap(int *pointer){

	//TROCA
	for(int i = 0, j = 4; i != j; i++, j--){
		int heads = pointer[i];
		int tails = pointer[j];

		pointer[i] = tails;
		pointer[j] = heads;
	}
}

int main(){
	//DECLARAÇÃO DE VARIÁVEIS
	int lista[5], i;

	printf("Escreva 5 números para a lista:\n");

	//INPUT
	for(i = 0; i < 5; i++){
		scanf("%d", &lista[i]);	
	}

	swap(lista);

	//OUTPUT
	printf("\nArray Inverso:\n");

	for(i = 0; i < 5; i++){
		printf("%d ", lista[i]);
	}

	printf("\n");

	return 0;
}
