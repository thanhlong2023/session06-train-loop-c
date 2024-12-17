#include <stdio.h>

int main()
{
    int n;
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    printf("Dãy Fibonacci: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
