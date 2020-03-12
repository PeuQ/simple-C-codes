#include <stdio.h>
#include <stdlib.h>

enum suit
{
    clubs,
    diamonds,
    hearts,
    spades,
};

enum letter
{
    j = 11,
    q,
    k,
    a,
};

union rank //elements share the same memory location.
{
    int i;
    enum letter c;
};

struct carta //elements are in different memory locations.
{
    enum suit naipe;
    union rank valor;
    
};

int main()
{
    struct carta baralho[52];
    return 0;
}