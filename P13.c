#include <stdio.h>
int main()
{
    int n = 0;

    if(scanf("%d", &n) != 1)
    {
        return 0;
    }

    if (n == 1)
    {
        printf("NO\n");
        return 0;
    }

    int is_prime = 1;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if (is_prime == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}