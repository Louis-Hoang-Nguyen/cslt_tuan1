#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max_val= a;
    int min_val= a;

    if (max_val<b) {max_val=b;}
    if (min_val>b) {min_val=b;}

    if (max_val<c) {max_val=c;}
    if (min_val>c) {min_val=c;}

    if (max_val<d) {max_val=d;}
    if (min_val>d) {min_val=d;}

    printf("%d %d\n", max_val, min_val); 
}