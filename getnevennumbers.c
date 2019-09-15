#include <stdio.h>
#include <stdlib.h>
int *getNEvenNumbers(int n){

	int *numbers = malloc(n * sizeof(int)) ;
	int incial = 2 ;

	for(int c =0; c < n; c++)
	{
		numbers[c] = incial ;
		incial += 2 ;
		printf("%d ", numbers[c]) ;	
	}

	return numbers ;
}

int main(int argc, char *argv[]){

	char aux ;
	int retval ;

	aux = atoi(argv[1]) ;

	*getNEvenNumbers(aux) ;	

	printf("\n") ;

	return 0 ;
}
