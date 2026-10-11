#include <stdio.h>
int main()
{
    unsigned int year = 0;
    
    scanf("%u", &year);

    if (year %400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("nam nhuan\n");
    }
    else
    {
        printf("khong phai nam nhuan\n");
    }
    
    return 0;
}
