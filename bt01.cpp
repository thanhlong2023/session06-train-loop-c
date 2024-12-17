#include <bits/stdc++.h>
int main()
{
    int n, sumLe = 0;
    printf("Nhập vào 5 số nguyên: \n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Số thứ %d: ", i);
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            sumLe += n;
        }
    }
    printf("Tổng lẻ là : %d", sumLe);
    return 0;
}