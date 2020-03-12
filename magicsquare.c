#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    size_t size = argc - 1;
    int matriz[size][size];
    int count = 1;
    int rowsum, collumsum, diagsum, rdiagsum;

    //SAVING MATRIX IN MEMORY
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matriz[i][j] = atoi(argv[count]);
            count++;
        }
    }

    //CHECKING DIAGONAL SUM.
    diagsum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i == j)
            {diagsum += matriz[i][j];}
        }
    }

    //CHECKING REVERSE DIAGONAL SUM.
    rdiagsum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(j == i)
            {rdiagsum += matriz[j][i];}
        }
    }
    if (rdiagsum != diagsum)
    {
        printf("Not a magic square!");
    }

    //CHECKING ROW SUM
    for (int i = 0; i < size; i++)
    {
        rowsum = 0;
        for (int j = 0; j < size; j++)
        {
            rowsum += matriz[i][j];
        }

        if (rowsum != diagsum)
        {
        printf("Not a magic square!");
        }
    }

    //CHECKING COLLUM SUM.
    for (int i = 0; i < size; i++)
    {
        collumsum = 0;
        for (int j = 0; j < size; j++)
        {
            collumsum += matriz[j][i];
        }

        if (collumsum != diagsum)
        {
        printf("Not a magic square!");
        }
    }
return 0;
}
