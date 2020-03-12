#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1, s2, s3, s4;
    int i, j, k;
    //MATRIZ 1
    printf("TAMANHO DA MATRIZ 1: 'LINHAS' 'COLUNAS'");
    scanf("%d %d", &s1, &s2);
    printf("MATRIZ 1:");
    int matriz1[s1][s2];
    for( i = 0; i < s1; i++)
    {
        for ( j = 0; j < s2; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }       
    }

    //MATRIZ 2
    printf("TAMANHO DA MATRIZ 2: 'LINHAS' 'COLUNAS'");
    scanf("%d %d", &s3, &s4);
    printf("MATRIZ 2: ");
    int matriz2[s3][s4];
    for ( i = 0; i < s3; i++)
    {
        for ( j = 0; j < s4; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    if(s2 != s3)
    {
        printf("Unable to realize operation.");
    }
    
    else
    {
        //MULTIPLICATION
        int matriz_result[s1][s4];
        for(i = 0; i < s1; i++)
        {
            for(j = 0; j < s4; j++)
            {
                matriz_result[i][j] = 0; //inializing element as '0'.
                for(k = 0; k < s4; k++)
                {
                    matriz_result[i][j] += matriz1[i][k] * matriz2[k][j];
                }
            }
        }

        //PRINTING RESULT
        for ( i = 0; i < s1; i++)
        {
            for ( j = 0; j < s4; j++)
            {
                printf("%d ", matriz_result[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
