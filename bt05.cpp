#include <stdio.h>

int main()
{
    int year, month, days;

    printf("Nhập vào số năm: ");
    scanf("%d", &year);
    getchar();
    printf("Nhập vào số tháng: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    default:
        printf("Tháng không hợp lệ.\n");
        return 1;
    }

    printf("Tháng %d năm %d có %d ngày.\n", month, year, days);

    return 0;
}
