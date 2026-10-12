#include <stdio.h>
int main()
{
    long long x1, y1, x2, y2, x3, y3;

    if (scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2) != 4)
    {
        return 0;
    }
    if (scanf("%lld %lld", &x3, &y3) != 2)
    {
        return 0;
    }

    if (((x1 <= x3 && x3 <= x2) || (x2 <= x3 && x3 <= x1)) && ((y1 <= y3 && y3 <= y2) || (y2 <= y3 && y3 <= y1)))
    {
        printf("C Thuộc hình chữ nhật\n");
    }
    else
    {
        printf("C không thuộc hình chữ nhật\n");
    }

    return 0;
}