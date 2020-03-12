#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    size_t size = argc-1;
    //int *arr = (int*) malloc(size * (sizeof(int)));
    int arr[size];
    int var;
    int seqst, seqend, media; //used afterwards to print the sub-sequence.

    //SAVING ARRAY
    for(int i = 1; i <= size; i++)
    {
        arr[i-1] = atoi(argv[i]);
    }
    
    int sum = arr[0];

    //FINDING SEQUENCES
    for(int i =0; i < size-1; i++)
    {
        var = arr[i];
        for(int j=0; j < size; j++)
        {
            var += arr[j];
            if (var > sum)
            {
                sum = var;
                seqst = i;
                seqend = j;
                media = seqend - seqst;
            }
            else if(var == sum)
            {
                if(media > (j-i))
                {
                    sum = var;
                    seqst = i;
                    seqend = j;
                    media = seqend - seqst;
                }
            }
        }
    }

    //PRINTING RESULT
    for(int k = seqst; k <= seqend; k++)
    {
        printf("%d", arr[k]);
    }
    printf("\n");
    return 0;
}
