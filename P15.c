#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    double S = 0.0;

    for (int i = 1; i <= n; i++)
    {
        S =  sqrt(i + S);
    }

    printf("%.2lf\n", S);

    return 0;
}