#include <stdio.h>
int main()
{
    long long n=0;
    long long tong=0;

    scanf("%lld", &n);

    for (long long i=0; i<=n; i++)
    {
        tong += i*i;
    }

    if (tong != (n*(n+1)*(2*n+1)/6))
    {
        return 1;
    }

    printf("%lld\n", tong);
    return 0;
}