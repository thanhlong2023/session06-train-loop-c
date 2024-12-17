#include <bits/stdc++.h>
int main()
{
    int n, sumLe = 0, cntLe = 0, cntChan = 0;
    printf("Nhập vào 5 số nguyên: \n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Số thứ %d: ", i);
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            ++cntChan;
        }
        else
        {
            ++cntLe;
        }
    }
    printf("Số lượng số lẻ là : %d\n", cntLe);
    printf("Số lượng số chẵn là : %d", cntChan);

    return 0;
}