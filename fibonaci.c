#include <stdio.h>
//Big-theta (N) 
void fibo(int n)
{
    int i = 0, j = 1;
    int k;
    int fibo;
    if (n == 0)
    {
        fibo = i;
    }
    else if (n == 1)
    {
        fibo = j;
    }
    else
    {
        for (k = 2; k <= n; k++)
        {
            j = i + j;
            i = j - i;
        }
        fibo = j;
    }

    printf("%d\n", fibo);
}

int main()
{
    fibo(1000);
    return 0;
}
