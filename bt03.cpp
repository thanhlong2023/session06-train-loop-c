#include <stdio.h>

int main()
{
    int password = 1234;
    int input;

    printf("Nhập mật khẩu: ");
    scanf("%d", &input);

    if (password == input)
    {
        printf("Mật khẩu đúng!\n");
    }
    else
    {
        printf("Mật khẩu sai!\n");
    }

    return 0;
}
