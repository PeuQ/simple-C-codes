#include <stdio.h>
#include <stdlib.h>
int *getNEvenNumbers(int n){

	int *numbers = malloc(n * sizeof(int)) ;
	int inicial = 2 ;

	for(int c = 0; c < n; c++)
	{
		numbers[c] = inicial ;
		inicial += 2;
	}
	return numbers ;
}

int main(int argc, char *argv[]){

	char aux ;
	int *retval ;

	aux = atoi(argv[1]) ;

	retval = getNEvenNumbers(aux) ;	

	for(int c = 0;c < aux;c++)
	{
		printf("%d ", retval[c]);
	}
	return 0 ;
}
