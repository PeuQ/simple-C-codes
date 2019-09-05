//Escreva um programa que calcule a diferença entre 2 períodos de temmpo.
//têm-se que usar ponteiros para receber os valores corretos nas variáveis desejadas

#include <stdio.h>

//DECLARANDO STRUCT
struct tempo
{
	int horas;;
	int minutos;
	int segundos;

//VARIÁVEIS STRUCT
} tempo_inicial, tempo_final, tempo_dif;

//FUNÇÃO PARA CALCULAR DIFERENÇA ENTRE OS TEMPOS
//Ponteiro dif recebe endereço de memória da variável tempo_dif
void dif_tempo(struct tempo inicio, struct tempo fim, struct tempo *dif){

	if(fim.segundos > inicio.segundos){
		inicio.minutos--;
		inicio.segundos += 60;
	}
	dif->segundos = inicio.segundos - fim.segundos;

	if(fim.minutos > inicio.minutos){
		inicio.horas--;
		inicio.minutos += 60;
	}
	dif->minutos = inicio.minutos - fim.minutos;

	dif->horas = inicio.horas - fim.horas;
}


int main() {
	printf("Digite horas/minutos/segundos do tempo inicial:\n");
	scanf("%d %d %d", &tempo_inicial.horas, &tempo_inicial.minutos, &tempo_inicial.segundos);

	printf("\nDigite horas/minutos/segundos do tempo final:\n");
	scanf("%d %d %d", &tempo_final.horas, &tempo_final.minutos, &tempo_final.segundos);

	//Passando parâmetros. ponteiro recebe endereço de memória
	dif_tempo(tempo_inicial, tempo_final, &tempo_dif);

	printf("\nDiferença: %d %d %d\n", tempo_dif.horas, tempo_dif.minutos, tempo_dif.segundos);

	return 0;
}
