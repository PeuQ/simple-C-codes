#include <stdio.h>
#include <stdlib.h>
int expn(int n, int p)
{
    if(p != 0)
    {
        return n * expn(n, p-1);
    }
    else
    {
        return 1;
    }   
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int p = atoi(argv[2]);
 
    int result = expn(n, p);
    printf("%d\n", result);
    return 0;
}
