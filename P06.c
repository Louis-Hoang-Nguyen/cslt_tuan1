#include <stdio.h>
#include <math.h>
int main()
{
    const double EPS = 0.000000000000001;
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    if (fabs(a) < EPS)
    {
        if (fabs(b) < EPS && fabs(c) < EPS)
        {
            printf("vo so nghiem\n");
        }
        else if (fabs(b) < EPS && fabs(c) >= EPS) 
        {
            printf("vo nghiem\n");
        }
        else
        {
            printf("x = %.2lf\n", -c/b);
        }
    }
    else 
    {
        double delta = b*b - 4*a*c;
        if (delta <= -EPS) 
        {
            printf("vo nghiem\n");
        }
        else if (fabs(delta) < EPS) 
        {
            printf("x = %.2lf\n", -b/2*a);
        }
        else
        {
            double x1 = (-b + sqrt(delta))/ (2*a);
            double x2 = (-b - sqrt(delta))/ (2*a);
            printf("x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        }
    }

    return 0;
}