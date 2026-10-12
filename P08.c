#include <stdio.h>
int main()
{
    long long person, previous, current;

    if (scanf("%lld %lld %lld", &person, &previous, &current) != 3) 
    {
        return 0;
    }

    long long usage = current - previous;
    long long price = 0;

    if (usage <= 4*person)
    {
        price = 3300;
    }
    else if (usage <= 6*person)
    {
        price = 5200;
    }
    else
    {
        price = 7000;
    }

    long long tong_tien = usage * price * 1.1;
    printf("%lld\n", tong_tien);
    return 0;
}