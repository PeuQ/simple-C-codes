#include <stdio.h>
#include <stdlib.h>

unsigned int Log2(int n)
{
    if (n > 1)
    {
        return 1 + Log2(n / 2);
    }
    else
    {
        return 0;
    } 
}

unsigned int Log10(int n)
{
    if (n > 1)
    {
        return 1 + Log10(n / 10);
    }
    else
    {
        return 0;
    } 
}

int main(int argc, char *argv[])
{
    unsigned int n = atoi(argv[1]);
    unsigned int result2 = Log2(n);
    unsigned int result10 = Log10(n);
    printf("%d %d\n", result2, result10);

    return 0;
}
