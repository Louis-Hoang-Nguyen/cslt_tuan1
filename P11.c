#include <stdio.h>
int main()
{
    unsigned int n = 0;

    if (scanf("%u", &n) != 1)
    {
        return 0;
    }

    double S = 0.0;

    for (int i=1; i <= n; i++)
    {
        S += (double) 1 / i;
    }

    printf("%.2lf\n", S);

    return 0;
}