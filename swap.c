#include <stdio.h>

//DEFININDO SWAP
void swap(int *x, int *y){
		int var;

		//SUBSTITUINDO VALORES
		var = *x;
		*x = *y;
		*y = var;

	//* = ponteiros / recebem endereços de memória da variável.
	//geralmente ponteiros devem ser do mesmo tipo da variável.
}

int main(){
		//DEFININDO VARIAVEIS
		int x, y;

		//RECEBENDO VALORES
		printf("\nDigite o valor de 'x': ");
		scanf("%d", &x);

		printf("\nDigite o valor de 'y': ");
		scanf("%d", &y);

		//SWAP
		swap(&x, &y);

		printf("\nTroca ocorrida: 'x'= %d, 'y'= %d\n", x, y);

		return 0;
}
