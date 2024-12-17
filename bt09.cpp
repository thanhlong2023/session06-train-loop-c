#include <bits/stdc++.h>
int main()
{
    int n, original;
    scanf("%d", &n);
    original = n;
    int sum = 0;
    while (n)
    {
        int digit = n % 10;
        sum = sum + digit * digit;
        n /= 10;
    }
    if (original == sum)
    {
        printf("Đây là số Armstrong\n");
    }
    else
    {
        printf("Không phải");
    }
    return 0;
}