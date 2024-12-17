#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Nhập vào 3 số a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phương trình có vô số nghiệm.\n");
            }
            else
            {
                printf("Phương trình vô nghiệm.\n");
            }
        }
        else
        {
            float x = -c / b;
            printf("Phương trình có một nghiệm: x = %.2f\n", x);
        }
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phương trình vô nghiệm.\n");
        }
        else if (delta == 0)
        {
            float x = -b / (2 * a);
            printf("Phương trình có nghiệm kép: x = %.2f\n", x);
        }
        else
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phương trình có hai nghiệm phân biệt: x1 = %.2f và x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
