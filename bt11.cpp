// #include <bits/stdc++.h>
// int nt(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }
//     return n > 1;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i; i <= n; i++)
//     {
//         if (nt(i))
//             printf("%d ", i);
//     }
//     return 0;
// }
#include <bits/stdc++.h>
int main()
{
    int n;
    printf("Nhập số n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
