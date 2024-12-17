#include <stdio.h>
#include <math.h>

int main()
{
    double tienGoc, laiSuat, tienLai, total;
    int months;

    printf("Nhập số tiền gửi ban đầu: ");
    scanf("%lf", &tienGoc);
    printf("Nhập lãi suất tháng (%%): ");
    scanf("%lf", &laiSuat);
    printf("Nhập số tháng gửi: ");
    scanf("%d", &months);

    laiSuat = laiSuat / 100;

    total = tienGoc * pow(1 + laiSuat, months);

    tienLai = total - tienGoc;

    printf("Tiền lãi: %.3lf\n", tienLai);
    printf("Tiền nhận được: %.3lf\n", total);

    return 0;
}
