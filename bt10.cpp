#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    int check = 1;

    if (n <= 1)
    {
        check = 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                check = 0;
                break;
            }
        }
    }

    if (check)
    {
        printf("Đây là số nguyên tố\n");
    }
    else
    {
        printf("Đây không là số nguyên tố\n");
    }

    return 0;
}
