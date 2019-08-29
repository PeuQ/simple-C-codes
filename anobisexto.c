#include <stdio.h>
	int main(){
		int ano;

		//PEDINDO ANO
		printf("Digite o ano desejado: \n");
		scanf("%d", &ano);

		//CHECANDO SE É BISEXTO
		if(ano%4 == 0){
			printf("\n%d é um ano bisexto!\n", ano);
		} else if (ano%100 == 0){
			printf("\n%d NÃO é um ano bisexto!\n", ano);
		}else if (ano%400 == 0){
			printf("\n%d é um ano bisexto!\n", ano);
		}else{
			printf("%d NÃO é um ano bisexto!\n", ano);
		}

		return 0;
	}
