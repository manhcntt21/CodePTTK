#include <stdio.h>

void fibo(int n) {
    int i = 0, j = 1;
    int k ;
    int fibo;
    for (k = 2; k <= n ; k++) {
        j = i + j;
        i = j - i;
    }
    printf("%d",j);
}
int main()
{   
    fibo(1000); 
    return 0;
}
