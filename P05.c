#include <stdio.h>
int main()
{
    unsigned long long n=0;
    
    if (scanf("%llu", &n) != 1)
    {
        return 0;
    }

    long long i=0;

    for (i=1; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            printf("%lld ", i);
        }
    }

    i--;

    for(; i>=1; i--)
    {
        if (n % i == 0 && i*i != n)
        {
            printf("%lld ", n / i);
        }
    }

    return 0;
}