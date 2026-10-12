#include <stdio.h>
int main()
{
    double x = 0;
    int n = 0;

    if (scanf("%lf %d", &x, &n) != 2)
    {
        return 0;
    }

    double S = 0.0;
    double so_hang_truoc = 1.0;
    
    for (int i = 1; i <= n; i++)
    {
        so_hang_truoc = so_hang_truoc * x / i;
        S += so_hang_truoc;
    }

    printf("%.2lf\n", S);

    return 0;
}