#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int size = argc - 1;
    int arr1[size];

    //RECEIVING SEQUENCE
    for ( i = 1; i <= size; i++)
    {
        arr1[i-1] = atoi(argv[i]);
    }
    
    //FROM N TO N-1;
    for ( i = 0; i < size; i++)
    {
        if(arr1[i] > size) { return -1;}
    }

    //CREATING PRINTABLE ARRAY
    int arr2[size];
    for ( i = 0; i < size; i++)
    {
        arr2[i] = 0;
    }
    
    //SOLVING THE PROBLEM
    for ( i = 0; i < size; i++)
    {
        arr2[arr1[i]] += 1;
    }
    
    for ( i = 0; i < size; i++)
    {
        if(arr2[i] != 0)
        {
            printf("%d repeated %d time(s).\n", i, arr2[i]);
        }
    }
    return 0;   
}
