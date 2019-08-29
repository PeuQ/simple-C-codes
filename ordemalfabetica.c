#include <stdio.h>
#include <string.h>

int main(){
	//DEFINIÇÃO
	char str_1[100], str_2[100];
	int c, i;

	//RECEBENDO STRINGS (INPUT)
	printf("\nDigite a 1ª string: ");
	scanf("%s", &str_1);

	printf("\nDigite sua 2ª string: ");
	scanf("%s", &str_2);

	//COMPARAÇÃO E OUTPUT
	if (strcmp(str_1, str_2)==0){
		printf("São iguais!\n");
		return 0;
	}

	for(c=0; c<100; c++){

		if(str_1[c] != str_2[c]){

		if(str_1[c] > str_2[c]){
			printf("A 1ª string vêm depois da 2ª!\n");
			return 1;
			
		}else if(str_1[c] < str_2[c]){
			printf("A 1ª string vêm antes da 2ª!\n");
			return -1;
		}
	}
		
	}

}
