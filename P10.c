#include <stdio.h>
int main()
{
    double balance = 0;
    int month = 0;
    double rate = 0;

    if (scanf("%lf %d %lf", &balance, &month, &rate) != 3)
    {
        return 0;
    }

    for (int i=0; i < month; i++)
    {
        balance = balance * (1.0 + rate/100.0);
    }

    printf("%.0lf\n", balance);
    
    return 0;
}