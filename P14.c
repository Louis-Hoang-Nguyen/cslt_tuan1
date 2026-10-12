#include <stdio.h>
int main()
{
    int n = 0;

    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    int n_goc = n;
    int n_dao = 0;

    while (n>0)
    {
        int conlai = n % 10;
        n_dao = n_dao * 10 + conlai;
        n = n / 10;
    }

    if (n_dao == n_goc)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}