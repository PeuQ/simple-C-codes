//Ex. 4 Algoritmo e Estrutura de dados.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int info ;
	struct Node *canhota ;
	struct Node *destra ;
} Node ;

Node *create_tree(int info)
{
	Node *raiz ;
	raiz = (Node*)malloc(sizeof(Node*)) ;

	raiz->info = info ;
	raiz->canhota = NULL ;
	raiz->destra = NULL ;

	return raiz ; //Retorna o valor para qual o ponteiro aponta
}

Node *insert(int info, Node *raiz_folha)
{
	if (raiz_folha == NULL)
	{
		return create_tree(info) ; //valor do ponteiro recebe valor "raiz"
	} else
	{
		if (info <= raiz_folha->info)
		{
			raiz_folha->canhota = insert(info, raiz_folha->canhota) ; //troca de valor por novo
		} else
		{
			raiz_folha->destra = insert(info, raiz_folha->destra) ; //troca de valor por novo
		}
	}
	return raiz_folha ;
}

void EncPreOrdem(Node *raiz_folha)
{
	if(raiz_folha != NULL)
	{
		printf(" %d",raiz_folha->info) ;
		EncPreOrdem(raiz_folha->canhota) ;
		EncPreOrdem(raiz_folha->destra) ;
	}
}

void EncInOrdem(Node *raiz_folha)
{
	if(raiz_folha != NULL)
	{
		EncInOrdem(raiz_folha->canhota) ;
		printf(" %d",raiz_folha->info) ;
		EncInOrdem(raiz_folha->destra) ;
	}
}

void EncPosOrdem(Node *raiz_folha)
{
	if(raiz_folha != NULL)
	{
		EncPosOrdem(raiz_folha->canhota) ;
		EncPosOrdem(raiz_folha->destra) ;
		printf(" %d",raiz_folha->info) ;
	}
}

int main(){
	int n = 0 ; 
	int casos, quant_elementos, info ; //Quant de arvores, quant de números na arvore, numeros.
	struct Node *raiz_folha ;

	scanf("%d", &casos) ;
	while(n!=casos)
	{
		Node *raiz_folha = NULL ;
		scanf("%d", &quant_elementos) ;
		
		for(int c=0; c<quant_elementos; c++)
		{
			scanf("%d", &info) ;
			raiz_folha = insert(info, raiz_folha) ;
		}

		printf("Case %d:\n", n+1) ;

		printf("Pre.:") ;
		EncPreOrdem(raiz_folha) ;
		printf("\n") ;

		printf("In..:") ;
		EncInOrdem(raiz_folha) ;
		printf("\n") ;

		printf("Pos.:") ;
		EncPosOrdem(raiz_folha) ;
		printf("\n") ;

		n++ ; //controla a quantidade de árvores criadas
	}
	return 0 ;
}
