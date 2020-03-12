#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(n != 0)
    {
        return n * fact(n-1);
    }
    else
    {
        return 1;
    }
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int result = fact(n);
    printf("%d\n", result);

    return 0;
}