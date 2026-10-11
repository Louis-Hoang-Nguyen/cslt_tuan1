#include <stdio.h>
int main()
{
    double bai_tap = 0;
    double thuc_hanh = 0;
    double ly_thuyet = 0;
    int cheating;
    double diem_tong = 0;

    scanf("%lf %lf %lf %d", &bai_tap, &thuc_hanh, &ly_thuyet, &cheating);

    diem_tong = 0.3*bai_tap + 0.3*thuc_hanh + 0.4*ly_thuyet;

    if (cheating == 1)
    {
        diem_tong = 0;
        printf("%.1lf FAILED\n", diem_tong);
    }
    else if (cheating == 0 && diem_tong >= 5)
    {
        printf("%.1lf PASSED\n", diem_tong);
    }
    else if (cheating == 0 && diem_tong < 5)
    {
        printf("%.1lf FAILED\n", diem_tong);
    }
    return 0; 
}